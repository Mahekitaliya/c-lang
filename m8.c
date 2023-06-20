#include <stdio.h>
int main()
{
	int i=1,n;
	printf("enter n:");
	scanf("%d",&n);
	do
	{
		printf("\n %d",i);
		i=i+2;
		}while(i<=n);
	return 0;
}