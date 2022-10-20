#include<stdio.h>
#include<string.h>

main () {
	char x[9999];
	gets(x);
	char *p=x;
	char *q=x;
	q=q+strlen(x)-1;
	for(int i=0;i<=strlen(x);i++,p++,q--) {
		if(*p==*q) {
			continue;
		}
		printf("no");
		return 0;
	}
	printf("yes");
	return 1;
}
