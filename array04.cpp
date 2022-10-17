#include<stdio.h>
main () {
	int i,a[21],n=0;
	for(i=0;i<20;i++) {
	scanf("%d",&a[i]);
	n=n+a[i];
	}
	printf("%d",n);
}
