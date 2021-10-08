#include<stdio.h>
#include<stdlib.h>

void Prof(int *Arr1,int No1,int k)
{
	int iCnt1=0;
	for(int i=0;i<No1;i++)
	{
		if(Arr1[i]>=0)
		{
			iCnt1++;
		}
		
	}
	 puts((iCnt1 < k) ? "YES" : "NO");
}
int main()
{
	int No1=0,k=0,c=0;
	scanf("%d",&c);
	int *Arr1=NULL;
	for(int i=0;i<c;i++)
	{
	
	 scanf("%d%d",&No1,&k);
	 Arr1=(int *)malloc(No1 * sizeof(int));
	for(int i=0;i<No1;i++)
	{
		scanf("%d",&Arr1[i]);
	}
	Prof(Arr1,No1,k);
	//printf("\n");
	}
}