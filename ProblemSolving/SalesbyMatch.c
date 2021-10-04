#include<stdio.h>
#include<stdlib.h>

int sockMerchant(int No,int *Arr)
{
	int Arr1[101]={0};
	int Sum=0;
	for(int i=0;i<No;i++)
	{
	    Arr1[Arr[i]]++;
	}
	for(int j=0;j<101;j++)
	{
		Sum=Sum+(Arr1[j]/2);
	}
	return(Sum);
}
int main()
{   
    int numberofPairs=0,No=0;
	scanf("%d",&No);
	int *Arr=NULL;
	Arr=(int *)malloc(No *sizeof(int));
	for(int i=0;i<No;i++)
	{
		scanf("%d",&Arr[i]);
	}
	numberofPairs=sockMerchant(No,Arr);
	printf("%d",numberofPairs);
	return(0);
}