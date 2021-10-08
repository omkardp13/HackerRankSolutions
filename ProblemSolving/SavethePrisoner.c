#include<stdio.h>

int Prisnor(int n,int m,int s)
{
	int i=0;
	i=s;
		while(m!=0)
		{	
               if(i==(n+1))
				i=1;	
			m--;
			i++;
			
			
		}
		printf("%d\t",(i-1));
	
}
int main()
{
	int Cnt=0,n=0,m=0,s=0;
	scanf("%d",&Cnt);
	
	for(int i=0;i<Cnt;i++)
	{
		scanf("%d%d%d",&n,&m,&s);
		Prisnor(n,m,s);
		printf("\n");
	}
	return(0);
}