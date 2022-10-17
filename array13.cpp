#include<stdio.h>
main () {
	int a[4][4],i,k,m=0,n=0;
	for(i=0;i<4;i++) {
		for(k=0;k<4;k++) {
			scanf("%d",&a[i][k]);
		}
	}
	for(i=0;i<4;i++) {
		for(k=0;k<4;k++) {
		if(i==k) {
			m=m+a[i][k];
		}
		else if(i+k==3) {
			n=n+a[i][k];
		}
	}
}
printf("%d",m+n);
}
