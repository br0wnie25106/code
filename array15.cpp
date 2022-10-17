#include<stdio.h>
main () {
	int A[3][2],i,k,m=0,n=0,B[3][2];
	for(i=0;i<3;i++) {
		for(k=0;k<2;k++) {
			scanf("%d",&A[i][k]);
		}
	}
	for(i=0;i<3;i++) {
		for(k=0;k<2;k++) {
			scanf("%d",&B[i][k]);
		}
	}
	for(i=0;i<3;i++) {
		for(k=0;k<2;k++) {
			printf("%d\t",A[i][k]+B[i][k]);
		}
		printf("\n");
	}
}

