#include<stdio.h>
main () {
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	if((a-543)%4==0) {
		if(b==2)
		printf("29");
		else if(b==4||b==6||b==9||b==11)
		printf("30");
		else 
		printf("31");
	}
	else if((a-543)%4!=0) {
		if(b==2)
		printf("28");
		else if(b==4||b==6||b==9||b==11)
		printf("30");
		else 
		printf("31");
	}
	}
