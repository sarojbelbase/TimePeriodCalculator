#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int AStart,BStart,AEnd,BEnd,Got1,Got2,Got3,Got,ANew,BNew,AResult,BResult,CResult,Result,AFix;
	printf("What's the Starting Time ?\n");
	scanf("%d%d",&AStart,&BStart);
	printf("When it's gonna end, then ?\n");
	scanf("%d%d",&AEnd,&BEnd);
	if (AStart<12)
	{AStart=AStart+12;}
	
	else if (AStart==12)
	{AStart=AStart;}
	
	if (AEnd<12)
	{AEnd=AEnd+12;}
	
	else if (AEnd==12)
	{AEnd=AEnd;}

	if (AStart>AEnd)
	{
		AFix=AStart-AEnd;
	}
	else if(AStart<AEnd) {
		AFix=AEnd-AStart;
	}
	
	Got1=60-BStart; //Subtracted 60 from the begginning time
	Got2=BEnd;  //Since we dont need to add or subtract so its that value
	Got3=(AFix-1)*60; //if anything remains in the way
	Got=Got1+Got2+Got3;

	printf("Anyways, Tell the time now ?\n");
	scanf("%d%d",&ANew,&BNew);
	if (ANew<12)
	{ANew=ANew+12;}
	
	else if (ANew==12)
	{ANew=ANew;}
	
	AResult=60-BNew;
	BResult=BEnd;
	CResult=(AEnd-ANew-1)*60;
	Result=AResult+BResult+CResult;
	printf("Actually, Sir Will Teach for only %d Minutes.\n",Got);
	printf("\t\t\t\t\t You better wait for %d Minutes more. \n", Result);
	return 0;
}
