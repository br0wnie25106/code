#include<stdio.h>
main () {
	int i,n;
	char a[n];
	printf("Enter int : ");
	scanf("%s",&a);
	for(i=n;i>=0;i--) {
		printf("%c",a[i-1]);
	}
}
