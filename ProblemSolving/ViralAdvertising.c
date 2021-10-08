#include<stdio.h>
int main()
{
	int Arr[51]={0};
	int Cnt=5;
	for(int i=1;i<7;i++)
	{
		printf("%d\n",Cnt/2);
		Cnt=Cnt*3;
	}
	return(0);
}