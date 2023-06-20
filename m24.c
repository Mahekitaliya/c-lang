#include<stdio.h>
int main()
{
	int x,y;
	printf("\n Enter x:");
	scanf("%d",&x);
	
	printf("\n Enter y:");
	scanf("%d",&y);
	if(x<2000||x>3000)
	{
		printf("\n %d",x);
	}
	if(y>100&&y<200)
	{
		printf("\n %d",y);
	}
	return 0;
}