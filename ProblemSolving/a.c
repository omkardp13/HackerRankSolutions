#include<stdio.h>
int main()
{
	int Arr[51]={0};
	int Arr1[51]={0};
	int Cnt=5,a=0,No=0;
	for(int i=0;i<51;i++)
	{
		Cnt=Cnt/2;
		if(i==0)
		{
			Arr1[i]=Cnt;
			a=Cnt;	
		}
		else
		{
		Arr1[i]=a+Cnt;
		a=Arr1[i];
		}
		Cnt=Cnt*3;
	}
	scanf("%d",&No);
		printf("%d",Arr1[No-1]);
	return(0);
}