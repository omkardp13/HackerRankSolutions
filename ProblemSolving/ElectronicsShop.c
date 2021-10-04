#include<stdio.h>
#include<stdlib.h>


int getMoneySpent(long int *Arr1,long int *Arr2,long int No1,long int No2,long int budget)
{
	long int curCost=0;
	long int Max=0,Cnt=0;
	for(int i=0;i<No1;i++)
	{
		for(int j=0;j<No2;j++)
	    {	
	       if((Arr1[i]+Arr2[j])<budget)
		   {
		    curCost=(Arr1[i]+Arr2[j]);
			if(curCost>budget)
				continue;
			else
			{
				if(Max==0)
					Max=curCost;
				else
				{
				if(curCost>Max)
					Max=curCost;
				}
			}
			
		   }
		  
	    }
	}
	
	if(Max==0)
		return -1;
	else
	return Max;
}
int main()
{
	long int *Arr1=NULL,*Arr2=NULL;
	long int No1=0,No2=0,spendMax=0,budget=0;
	scanf("%ld%ld%ld",&budget,&No1,&No2);
	Arr1=(long int *)malloc(No1 * sizeof(Arr1));
	Arr2=(long int *)malloc(No2 * sizeof(Arr2));
	for(int i=0;i<No1;i++)
	{
		scanf("%ld",&Arr1[i]);
	}
	for(int i=0;i<No2;i++)
	{
		scanf("%ld",&Arr2[i]);
	}
	 spendMax=getMoneySpent(Arr1,Arr2,No1,No2,budget);
	 printf("%ld",spendMax);
	return(0);
}