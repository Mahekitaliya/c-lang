#include<stdio.h>
int main()
{
	int i=1,total=0;
	do
	{
		printf("\n %d",i);
		total+=i;
		i++;
	}while(i<=10);
	printf("\n total is : %d",total);
	return 0;
}