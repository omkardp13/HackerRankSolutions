#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *Arr=NULL;
	int No=0,k=0;
	scanf("%d%d",&No,&k);
	Arr=(int *)malloc(No *sizeof(int));
	for(int i=0;i<No;i++)
	{
		scanf("%d",&Arr[i]);
	}
	int Max=Arr[0];
	for(int i=1;i<No;i++)
	{
		if(Max<Arr[i])
		{
			Max=Arr[i];
		}
	}
	int l=(Max-k);
	if(l<0)
	{
		printf("0");
	}
	else
	  printf("%d",l);
	return(0);
}