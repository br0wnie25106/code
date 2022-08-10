#include<stdio.h>
#include<string.h>
main() {
	int i,len;
	char a[21];
	printf("enter text : ");
	gets(a);
	len=strlen(a);
	for(i=len-1;i>=0;i--) {
		printf("%c",a[i]);
	}
}
