#include<stdio.h>
main() {
	int a[6],b=0,i,k,g,c[5][5];
	for(g=0;g<5;g++)
	scanf("%d",&a[g]); 
	printf("\n");
	for(i=0;i<5;i++) {
		for(k=0;k<5;k++) {
			c[i][k]=a[(k+i)%5]; 
			}
		}
	for(i=0;i<5;i++) {
		for(k=0;k<5;k++) {
		if(i!=2&&k%4!=2)
		printf("  ");
		else if(k==2&&i!=2)
		printf("%d",c[i][2]);
		else if(i==2)
		printf("%d ",c[2][k]);
			}
		printf("\n");
		}	
}

