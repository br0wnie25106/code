#include<stdio.h>
main () {
	int a,b,n=0,k;
	scanf("%d",&a);
	while(a!=0) {  
		b=a%10;  
		n=n*10+b;  
		a=a/10;  
	}
	printf("%d",n);
	}
