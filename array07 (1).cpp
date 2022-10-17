#include<stdio.h>
main () {
	int i,A[4],B[4],n=0,k;
	for(i=0;i<4;i++) {
	printf("Enter A%d : ",i+1);
	scanf("%d",&A[i]);
	}
	for(i=0;i<4;i++) {
	printf("Enter B%d : ",i+1);
	scanf("%d",&B[i]);
	}
	for(i=0;i<4;i++) {
		for(k=0;k<4;k++) {
			if(A[i]==B[k])
			n++;
		}
	}
	printf("%d",n);
}
