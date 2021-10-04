#include<stdio.h>
#include<stdlib.h>

int countingValley(char *Arr,int No)
{
	int Num=0,iCnt=0;
	for(int i=0;i<No;i++)
	{
		if(Arr[i]=='U'&&Num>=0)
		{
			
			Num++;
		}
		else if(Arr[i]=='U'&&Num<0)
		{
			Num++;
			if(Num==0)
				iCnt++;
		}
		if(Arr[i]=='D')
		{
			Num--;
			
		}
		
	}
	return(iCnt);
}
int main()
{
	char *Arr=NULL;
	int valley=0;
	int No=0;
	scanf("%d",&No);
	Arr=(char *)malloc(No *sizeof(char));
	scanf("%s",Arr);
	valley=countingValley(Arr,No);
	printf("%d",valley);
	return(0);
}