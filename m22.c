#include<stdio.h>
int main()
{
	int a,gross_salary,da,hra;
	printf(" enter salary:");
	scanf("%d",&a);
	if(a<=2500)
	{
		da=(a*8)/100;
		hra=(a*20)/100;
		gross_salary=da+a+hra;
		printf("gross_salary is %d",gross_salary);
	}
	else if(a<=10000)
	{
		da=(a*12)/100;
		hra=(a*30)/100;
		gross_salary=da+a+hra;
		printf("gross_salary is %d",gross_salary);
	}
	else if(a<=15000)
	{
		da=(a*15)/100;
		hra=(a*40)/100;
		gross_salary=da+a+hra;
		printf("gross_salary is %d",gross_salary);
	}
	else 
	{
		da=(a*20)/100;
		hra=(a*50)/100;
		gross_salary=da+a+hra;
		printf("gross_salary is %d",gross_salary);
	}
	return 0;
}