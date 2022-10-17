#include<stdio.h>
main () {
	int i,a[21];
	float n=0,k=0;
	for(i=0;i<20;i++) {
	scanf("%d",&a[i]);
	}
	for(i=0;i<20;i++) {
		if(a[i]>0) {
		n=n+a[i];
		k=k+1;
	}
	}
	printf("%.2f",n/k);
}
