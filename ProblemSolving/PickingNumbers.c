#include<stdio.h>
#include<stdlib.h>

int main()
{
	int No=0;
	int *Arr=NULL;
	scanf("%d",&No);
	Arr=(int *)malloc(No * sizeof(int));
	for(int i=0;i<No;i++)
	{
		scanf("%d",&Arr[i]);
	}
	int temp=0;
	for(int i=0;i<No;i++)
	{
		for(int j=(i+1);j<No;j++)
		{
		if(Arr[i]>Arr[j])
		{
			temp=Arr[j];
			Arr[j]=Arr[i];
			Arr[i]=temp;
		}
		}
	}
	int iCnt1=1,iCnt2=0,i=0,j=0,k=0;
	int Arr1[100]={0};
	while(i!=No)
	{
		
		if(Arr[j]-Arr[i+1]==1||Arr[j]-Arr[i+1]==-1||Arr[j]-Arr[i+1]==0)
		{
			iCnt1++;
			i++;
		}
		else
		{
			Arr1[k]=iCnt1;
			iCnt1=1;
			k++;
		    i++;
		    j=i;
		}
		
	}
	int Max=Arr1[0];
	for(int i=0;i<100;i++)
	{
		if(Max<Arr1[i])
			Max=Arr1[i];
	}
	printf("%d",Max);
   return(0);	
}