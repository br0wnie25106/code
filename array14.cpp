#include<stdio.h>
main () {
	int a[4][4],i,k,m=0,n=0;
	for(i=0;i<4;i++) {
		for(k=0;k<4;k++) {
			scanf("%d",&a[i][k]);
			if(k>i)
			n=n+a[i][k];
		}
	}
	printf("%d",n);
}

