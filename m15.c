#include<stdio.h>
int main()
{
	int i=1,total=0;
	while(i<=7)
	{
		printf("\n %d",i);
		total+=i;
		i+=2;
	}
		printf("\n total is odd  : %d ",total);
		return 0;
} 