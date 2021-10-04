#include<stdio.h>
#include<stdlib.h>

void CatMause(int x,int y,int m)
{
	int distance1=m-x;
	int distance2=m-y;
	if(distance1<0)
	{
		distance1=(-distance1);
	}
	if(distance2<0)
	{
		distance2=(-distance2);
	}
	if(distance1>distance2)
	{
		printf("Cat B\n");
	}
	else if(distance1<distance2)
	{
		printf("Cat A\n");
	}
	else
	{
		printf("Mouse C\n");
	}
}
int main()
{
	int no=0;
	int x=0,y=0,m=0;
	scanf("%d",&no);
	for(int i=0;i<no;i++)
	{
	  scanf("%d%d%d",&x,&y,&m);
	  CatMause(x,y,m);
	}
	return(0);
}