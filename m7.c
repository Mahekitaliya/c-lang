#include<stdio.h>
int main()
{
int i,n;
printf("Enter n :");
scanf("%d",&n);
i=2;
while(i<=n)
{
	printf("\n %d",i);
	i= i+2;
}
return 0;
}