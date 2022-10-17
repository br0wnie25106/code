#include<stdio.h>
main () {
	int a[5][3],i,k,m=0,n=0;
	for(i=0;i<5;i++) {
		for(k=0;k<3;k++) {
			scanf("%d",&a[i][k]);
		}
	}
	for(i=0;i<5;i++) {
		for(k=0;k<3;k++) {
			m=m+a[i][k];
		}
		printf("sum in row%d : %d\n",i+1,m);
		m=0;
	}
	for(k=0;k<3;k++) {
		for(i=0;i<5;i++) {
			n=n+a[i][k];
		}
		printf("sum in column%d : %d\n",k+1,n);
		n=0;
	}
}
