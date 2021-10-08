#include<stdio.h>
#include<stdlib.h>

int main()
{
	long int n=0,k=0,q=0,temp=0,i=0;
	long int *Arr=NULL;
	scanf("%ld%ld%ld",&n,&k,&q);
	Arr=(long int *)malloc(n * sizeof(long int));
	for(long int i=0;i<n;i++)
	{
		scanf("%ld",&Arr[i]);
	}
	while(k!=0)
	{
	    i=0;
		temp=Arr[n-1];
	    Arr[n-1]=Arr[n-2];
		Arr[n-2]=Arr[i];
		Arr[i]=temp;
	
	    k--;
	}
	long int no=0;
	for(long int i=0;i<q;i++)
	{
		scanf("%ld",&no);
		printf("%ld\n",Arr[no]);
	}
	return(0);
}