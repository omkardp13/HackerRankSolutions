#include<stdio.h>
#include<stdlib.h>

int pageCount(int totalPages,int pageNumber)
{
	int front=0,back=0;
	front=pageNumber/2;
	back=(totalPages/2)-(pageNumber/2);
	if(front<back)
		return front;
	else
		return back;
}
int main()
{   
    int totalPages=0,pageNumber=0,flipPage=0;
	scanf("%d",&totalPages);
	scanf("%d",&pageNumber);
	flipPage=pageCount(totalPages,pageNumber);
	printf("%d",flipPage);
	return(0);
}