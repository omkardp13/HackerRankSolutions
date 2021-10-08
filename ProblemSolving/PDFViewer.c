#include<stdio.h>

int main()
{
	char s[8]={'\0'};
	int Arr[26]={0};
	int Arr1[10000]={0};
	int iCnt=0;
	for(int i=0;i<26;i++)
	{
		scanf("%d",&Arr[i]);
	}
	
    scanf(" %[^\n]%*c",s);    
	int i=0;
	while(s[i]!='\0')
	{
		iCnt=s[i]-97;
		if(iCnt<0)
			iCnt=-iCnt;
	    Arr1[i]=Arr[iCnt];
		i++;
	}
	int max=Arr1[0];
	for(int j=0;j<7;j++)
	{
		if(max<Arr1[j])
			max=Arr1[j];
	}
	printf("%d",(max*i));
	return(0);
}