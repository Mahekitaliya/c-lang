#include <stdio.h>
int main()
{
	int bill,a;
	printf("\n enter unit=");
	scanf("\n %d",&a);
	if(a<=100)
	{
		bill=50+a*0.6;
		printf("your bill is %d rs per unit",bill);
	}
	else if( a<=300)
	{
		bill=50+60+(a-100)*0.8;
		printf("your bill is %d rs per unit",bill);
	}
	else 
	{
		bill=50+60+160+(a-300)*0.9;
		printf("your bill is %d rs per unit",bill);
	}
	if(bill>300)
	{
		bill=bill+(bill*0.15);
		printf(" \n your bill is %d rs per unit with 15% bill",bill);
	}
        return 0;
}
