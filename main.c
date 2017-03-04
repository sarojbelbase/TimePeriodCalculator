#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int AStart,BStart,AEnd,BEnd,Got1,Got2,Got3,Got,ANew,BNew,AResult,BResult,CResult,Result,AFix,AFix2;
	printf("What's the Starting Time ?\n");
	scanf("%d%d",&AStart,&BStart);
	printf("When it's gonna end, then ?\n");
	scanf("%d%d",&AEnd,&BEnd);
   
   while(AStart==AEnd)
		{
		AResult=0;
		BResult=0;
		CResult=BEnd-BNew;
		AEnd=AEnd-12;
		AStart=AStart-12;
		}	

   if (AStart<AEnd)
	
	while (AEnd<=12 || AStart<=12 )
		{
			AEnd=AEnd+12;
			AStart=AStart+12;
			AFix=AEnd-AStart-1;
			Got1=60-BStart;
			Got2=BEnd; 
			Got3=AFix*60;
		}

   else if(AStart>AEnd) 
	{
	
		while (AEnd<=12)
		{
			AEnd=AEnd+12;
			AFix=AEnd-AStart-1;
			Got1=60-BStart;
			Got2=BEnd; 
			Got3=AFix*60;
		}
	
		
	}
	
	Got=Got1+Got2+Got3;
	printf("Anyways, Tell the time now ?\n");
	scanf("%d%d",&ANew,&BNew);

	if (ANew==AEnd)
		{
		AResult=0;
		BResult=0;
		CResult=BEnd-BNew;
		}                                                     //Alright Now >>>Solved

	else if (ANew>AEnd)
		
               {
               	
		AResult=60-BNew;
		BResult=BEnd;
		CResult=(ANew-AEnd-1)*60;
		
	}                                               //Alright Now >>>Not Solved

	else if(ANew<AEnd)
	{
		if (ANew<12)
			{
				ANew=ANew+12;
				AResult=60-BNew;
				BResult=BEnd;
				CResult=(AEnd-ANew-1)*60;
			}
		else if (ANew<=12) 
			{
				AResult=60-BNew;
				BResult=BEnd;
				CResult=(AEnd-ANew-1)*60;
			}
	}						//Fixed

	Result=(AResult+BResult+CResult);
	printf("\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",AStart,AEnd,BEnd,ANew,BNew,AResult,BResult,CResult);

	//printf("Actually, Sir Will Teach for only %d Minutes.\n",Got);
	//printf("\t\t\t\t\t You better wait for %d Minutes more. \n", Result);
	return 0;
}
