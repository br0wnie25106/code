#include<stdio.h>
main () 
{
	int b,i,n=0;
	printf("Enter int : ");
	scanf("%d",&b);
	if(b<0)
	printf("Invaild input");
	while(b!=0) {
		i=b%10;
		n=n*10+i;
		b=b/10;
	}
	printf("%d",n);
}
