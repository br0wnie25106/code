#include<stdio.h>
main () {
	int i,a[5];
	for(i=0;i<5;i++) {
	scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	printf("%d\n",a[i]);
}
