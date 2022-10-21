#include<stdio.h>
int main () {
	int a[2][2],b[2][3],c[2][3];
	int sum=0;
	int i,k;
	for(i=0;i<2;i++) {
		for(k=0;k<2;k++) {
			printf("Enter a[%d][%d] : ",i,k);
			scanf("%d",&a[i][k]);
		}
	}
	for(i=0;i<2;i++) {
		for(k=0;k<3;k++) {
			printf("Enter b[%d][%d] : ",i,k);
			scanf("%d",&b[i][k]);
		}
	}
	
	for(i=0;i<2;i++) {  //i=0
		for(k=0;k<3;k++) {  //k=1
			sum=0;
			for(int j=0;j<2;j++) {  //j=0
				sum+=a[i][j]*b[j][i+k];  //sum=
				c[i][k]=sum;
			}
		} 
	}
	for(i=0;i<2;i++) {
		for(k=0;k<3;k++) {
			printf("%d\t",c[i][k]);
		}
		printf("\n");
	}
}
