#include<stdio.h>
#include<string.h>
main() {
	int i,len,a;
	char b[11];
	printf("enter number : ");
	scanf("%d",&a);
	printf("enter text : ");
	scanf("%s",&b);
	for(i=a;b[i]!='\0';i++) {
		printf("%c",b[i]);
	}
	for(i=0;i<a;i++) {
	printf("%c",b[i]);
	}	
}
