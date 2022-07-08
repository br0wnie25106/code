#include<stdio.h>
main()
{
	float height, base, area;
	printf("Enter height: ");
	scanf("%f",&height);
	printf("Enter base: ");
	scanf("%f",&base);
	area = 0.5 * height * base;
	printf("area=%.2f",area);
}

