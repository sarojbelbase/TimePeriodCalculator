#include <iostream>
#include <iomanip>
using namespace std;
class DurationCalculator
{ 
  private:  
                int StartingHours,StartingMinute,StartingSecond,EndingHours,EndingMinute,EndingSecond;
                int TotalStartingSecs,TotalEndingSecs,VeryTotalSecs;
                int AmountOfMinutes, ExactSeconds, ExactHours, ExactMinutes;
                float PercentOfMonth,PercentOfDay;
                string StartingTimeHalf, EndingTimeHalf;
  public:   
                void BothSameHalves();
                void OppositeHalves();
                void AskQuestions();
                void NotActualAlgorithm();
                void ConverterAndStuff();
                void PrintingStuffs();
};
int main(int argc, char const *argv[])
{
DurationCalculator calc; 
// setting classes
calc.AskQuestions();
//Algorithmforbothonamorpm
calc.NotActualAlgorithm();
//Converting to Minutes & Seconds
calc.ConverterAndStuff();
// Prints Output
calc.PrintingStuffs();
return 0;
}
void DurationCalculator :: AskQuestions()
                {
                    cout << "What's the Starting Time ? ( Example: 12: 40: 36 PM)"<<endl;
                    cin >>StartingHours>>StartingMinute>>StartingSecond>>StartingTimeHalf;
                    cout << "When it's gonna end, then ? ( Example: 5: 20: 36 AM)"<<endl;  
                    cin >>EndingHours>>EndingMinute>>EndingSecond>>EndingTimeHalf;
                     //Asked about the first CalculatedHours time, minute time & remaining CalculatedHours time. 
                }
void DurationCalculator :: NotActualAlgorithm()
{
    if((StartingTimeHalf=="AM" || StartingTimeHalf == "am") && (EndingTimeHalf=="AM" || EndingTimeHalf == "am" ))
  { 
    BothSameHalves();
  } 
    if ((StartingTimeHalf=="PM" || StartingTimeHalf == "pm") && (EndingTimeHalf=="PM" || EndingTimeHalf == "pm"))
    {
      BothSameHalves(); 
    }
    else if((StartingTimeHalf=="AM" || StartingTimeHalf == "am") && (EndingTimeHalf=="PM" || EndingTimeHalf == "pm" ))
  { 
    OppositeHalves();
  } 
    else if ((StartingTimeHalf=="PM" || StartingTimeHalf == "pm" ) && (EndingTimeHalf=="AM" || EndingTimeHalf == "am"))
    {
       OppositeHalves(); 
    }
}
void DurationCalculator :: ConverterAndStuff()
{
   AmountOfMinutes=VeryTotalSecs/60;
   ExactSeconds=VeryTotalSecs%60;
   //Converting AmountOfMinutes into hours
   ExactHours=AmountOfMinutes/60;
   ExactMinutes=AmountOfMinutes%60;
   PercentOfDay=(((float)VeryTotalSecs/86400)*100);
   PercentOfMonth=PercentOfDay/30;
}
void DurationCalculator :: PrintingStuffs()
{
   cout<<endl<<endl;
   cout<<"The duration between "<<StartingHours<<":"<<StartingMinute<<":"<<StartingSecond<<StartingTimeHalf<<" & ";
   cout<<EndingHours<<":"<<EndingMinute<<":"<<EndingSecond<<EndingTimeHalf<<" is ";
   cout<<ExactHours<<"hours, "<<ExactMinutes<<" minutes and "<<ExactSeconds<<" seconds."<<endl;
   cout<<"\n++++++++++++++++++++++++++++"<<endl;
   cout<<"Alternate Time Units:\n"<<endl;
   cout<<VeryTotalSecs<<" Seconds"<<endl;
   cout<<AmountOfMinutes<<" Minutes"<<endl;
   cout<<ExactHours<<" Hours"<<endl;
   cout<<fixed<<setprecision(2)<<PercentOfDay<<"% "<<"of a 24 hour day."<<endl;
   cout<<PercentOfMonth<<"% "<<"of a month."<<endl;
}
void DurationCalculator :: BothSameHalves()
{
  TotalStartingSecs=(StartingHours*60*60)+(StartingMinute*60)+StartingSecond;
  TotalEndingSecs=(EndingHours*60*60)+(EndingMinute*60)+EndingSecond;
  if (TotalStartingSecs>TotalEndingSecs)
    {
    VeryTotalSecs=TotalStartingSecs-TotalEndingSecs;
    }
  else
    {
    VeryTotalSecs=TotalEndingSecs-TotalStartingSecs;
    }
}
void DurationCalculator :: OppositeHalves()
{
  TotalStartingSecs=(StartingHours*60*60)+(StartingMinute*60)+StartingSecond;
  TotalEndingSecs=((EndingHours+12)*60*60)+(EndingMinute*60)+EndingSecond;
  if (TotalStartingSecs>TotalEndingSecs)
    {
    VeryTotalSecs=TotalStartingSecs-TotalEndingSecs;
    }
  else
    {
    VeryTotalSecs=TotalEndingSecs-TotalStartingSecs;
    }
}
