#include<stdio.h>
#include<stdlib.h>

int main()
{
	int No=0,iCnt=0,No1=0;
	int Arr[61]={0};
	int *Arr1=NULL;
	scanf("%d",&No1);
	Arr1=(int *)malloc(No1 * sizeof(int));
	for(int i=0;i<No1;i++)
	{
		scanf("%d",&Arr1[i]);
	}
	for(int i=0;i<61;i++)
	{
		if(i%2==0)
		{
			
			iCnt++;
			Arr[i]=iCnt;
		}
		else
		{
			iCnt=iCnt*2;
			Arr[i]=iCnt;
		}
	}
	for(int i=0;i<No1;i++)
	{
	   printf("%d\n",Arr[Arr1[i]]);
	}
	return(0);
}