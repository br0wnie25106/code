#include<stdio.h>
#include<math.h>
main()
{
	float weight, height, BMI;
	printf("enter weight in kg: ");
	scanf("%f",&weight);
	printf("enter height in m: ");
	scanf("%f",&height);
	BMI = (weight/pow(height,2));
	printf("BMI = %.2f",BMI);
}
