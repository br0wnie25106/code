#include<stdio.h>
main() {
	int x,k;
	char i;
	printf("enter a number : ");
	scanf("%d",&x);
	if(x<0)
	printf("invalid input");
	for(k=1;k<=x;k++) {
	for(i=1;i<=k;i++) {
		printf("%c",i+64);
	}
	printf("\n");
	}
}

