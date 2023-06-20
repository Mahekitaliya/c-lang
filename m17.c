#include<stdio.h>
int main()
{
	int i=2; total=0;
	do
	{
		printf("\n %d ",i);
		total+=i;
		i+=2;
	}while(i<=6);