#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
			printf("\n");
	}
	for(i=2;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
			printf("\n");
	}
	return 0;
}