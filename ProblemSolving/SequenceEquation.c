#include<stdio.h>
#include<stdlib.h>

int main()
{
	int No=0;
	int *Arr=NULL;
	scanf("%d",&No);
	Arr=(int *)malloc(No * sizeof(int));
	int Arr1[50]={0};
	for(int i=1;i<=No;i++)
	{
		scanf("%d",&Arr[i]);
	}
	for(int i=1;i<=No;i++)
	{
		
		      Arr1[Arr[Arr[i]]]=Arr[Arr[Arr[i]]];
		
	}
	for(int i=1;i<=No;i++)
	{
		//Arr1[Arr[i]]=Arr[Arr[i]];
		printf("%d\n",Arr1[i]);
	}
	return(0);
}