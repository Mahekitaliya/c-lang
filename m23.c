#include <stdio.h>
int main()
{
	int tax,a;
	printf("\n enter income=");
	scanf("\n %d",&a);
	if(a<=2500)
	{
		tax=a*0;
		printf("your tax is %d rs per income",tax);
	}
	else if( a<=5000)
	{
		tax=(a-2500)*0.1;
		printf("your tax is %d rs per income",tax);
	}
	else if(a<=10000)
	{
		tax=250+(a-5000)*0.2;
		printf("your tax is %d rs per income",tax);
	}
	else
	{
		tax=250+1000+(a-10000)*0.3;
		printf("your tax is %d rs per income",tax);
	}	
	return 0;
}
