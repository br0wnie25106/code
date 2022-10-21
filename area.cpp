#include<stdio.h>
int f(float a) {
	float b;
	b=a*a+2*a+1;
	return b;
}

main () {
	float a0=0.0,a1,d,sum=0.0,x;
	printf("enter x : ");
	scanf("%f",&x);
	d=x/(x*100.0);
	for(int i=0;i<x*100;i++) {
		a1=a0+d;
		sum=sum+((0.5*(f(a0)+f(a1)))*d);
		a0=a1;
	}
	printf("area = %f",sum);
}
