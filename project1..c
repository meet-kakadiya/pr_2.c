#include<stdio.h>

main()
{
	float  bs,hra,da,ta,gs;
	
	printf("enter the value of bs");
	scanf("%f",&bs);
	
	printf("enter the value of hra");
	scanf("%f",&hra);
	printf("enter the value of da");
	scanf("%f",&da);
	printf("enter the value of ta");
	scanf("%f",&ta);
	
	
	hra=bs*0.10;
	da=bs*0.05;
	ta=bs*0.08;
	
	gs= bs+hra+da+ta;
	
	printf("enter the value of gross salary %f",gs);
	
	
}