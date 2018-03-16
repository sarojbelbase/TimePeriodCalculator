#include <iostream>
#include <iomanip>
using namespace std;
int StartingHours,StartingMinute,StartingSecond,EndingHours,EndingMinute,EndingSecond,TotalStartingSecs,TotalEndingSecs,VeryTotalSecs;
string StartingTimeHalf, EndingTimeHalf;
float PercentOfMonth,PercentOfDay;
void BothSameHalves();
void OppositeHalves();
int main(int argc, char const *argv[])
{
 cout << "What's the Starting Time ? ( Example: 12: 40: 36 PM)"<<endl;
  cin >>StartingHours>>StartingMinute>>StartingSecond>>StartingTimeHalf;
  cout << "When it's gonna end, then ? ( Example: 5: 20: 36 AM)"<<endl;  
  cin >>EndingHours>>EndingMinute>>EndingSecond>>EndingTimeHalf; //Asked about the first CalculatedHours time, minute time & remaining CalculatedHours time. 
  //Algorithmforbothonamorpm
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
    //Converting to Minutes & Seconds
   int AmountOfMinutes=VeryTotalSecs/60;
   int ExactSeconds=VeryTotalSecs%60;
   //Converting AmountOfMinutes into hours
   int ExactHours=AmountOfMinutes/60;
   int ExactMinutes=AmountOfMinutes%60;
   PercentOfDay=(((float)VeryTotalSecs/86400)*100);
   PercentOfMonth=PercentOfDay/30;
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
  return 0;
}
void BothSameHalves()
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
void OppositeHalves()
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
