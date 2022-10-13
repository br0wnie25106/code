#include<stdio.h>
main() {
	int x;
	char i;
	printf("enter a number : ");
	scanf("%d",&x);
	if(x<0)
	printf("invalid input");
	char y=x+64;
	for(i='A';i<=y;i++) {
		printf("%c",i);
	}
}

