#include<stdio.h>
int main()
{
	int i=1,total=0;
	while(i<=5)
	{
		printf("\n %d",i);
		total+=i;
		i++;

	}
	printf("\n total is %d",total);
	return 0;
}