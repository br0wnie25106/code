#include<stdio.h>
main () {
	int i,a[21],n=0,k=0;
	for(i=0;i<20;i++) {
	scanf("%d",&a[i]);
	if(i&2!=0)
	n=n+a[i];
	}
	printf("sum = %d",n);
}
