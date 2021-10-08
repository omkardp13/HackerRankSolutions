#include<stdio.h>
int main()
{
int No1=0,No2=0,k=0,temp=0,sum=0,iCnt=0;
scanf("%d%d%d",&No1,&No2,&k);
for(int i=No1;i<=No2;i++)
{
	temp=i;
	while(temp!=0)
	{
		sum=sum*10+(temp%10);
		temp=temp/10;
	}
	if((i-sum)%k==0)
		iCnt++;
	sum=0;
}
printf("%d",iCnt);
return(0);
}