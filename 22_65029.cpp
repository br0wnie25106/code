#include<stdio.h>
#include<string.h>
main () {
	char x[50];
	int i,a,y=0;
	printf("Input String = ");
	scanf("%s",x);
	a=strlen(x);
	for(i=0;i<a;i++) {
		if(x[i]==x[a-i-1])
		y=y+1;
		else 
		y=0;
	}
	if(y==a)
	printf("%s is a Palindrom.",x);
	else
	printf("%s is not a Palindrom.",x);
}
