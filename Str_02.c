#include<stdio.h>
main() {
	int i,m=0;
	char a[21];
	printf("enter text : ");
	gets(a);
	for(i=0;a[i]!=\0;i++) {
		if(a[i]>='a'&&a[i]<='z')
		a[i]=a[i]-32;
	}
	printf("%s",a);
}
