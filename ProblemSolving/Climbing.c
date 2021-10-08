#include<stdio.h>
#include<stdlib.h>

int main()
{
	int No1=0,No2=0;
	int *Arr1=NULL;
	int *Arr2=NULL;
	int Arr3[200]={0};
	scanf("%d",&No1);
	Arr1=(int *)malloc(No1 * sizeof(int));
	for(int i=0;i<No1;i++)
	{
		scanf("%d",&Arr1[i]);
	}
	scanf("%d",&No2);
	Arr2=(int *)malloc(No2 * sizeof(int));
	for(int i=0;i<No2;i++)
	{
		scanf("%d",&Arr2[i]);
	}
	
	int j=0,k=0;
	for(int i=0;i<No2;i++)
	{
		for(j=0;j<No1;j++)
		{
			
			if(Arr2[i]>=Arr1[j])
			{
					if(j==0)
		            {
			            printf("1\n");
						break;
		            }
					else
					{
				         k=(j);
			           	if(k<0)
				      {
				     k=-k;	
				   }
			      printf("%d\n",k);	
				  break;
			}
			}
		}
		if(j==No1)
		{
			printf("%d\n",(j));
		}

		
	}
	return(0);
}