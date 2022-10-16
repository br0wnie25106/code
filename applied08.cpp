#include<stdio.h>
main () {
	int x,a,b,i,k;
	scanf("%d",&x);
	printf("\n");
	for(i=2*x-1;i>=x;i--) {  //half top
		for(k=1;k<=4*x-2;k++) {
			if(k<=2*x-1) {
			if(i+k==2*x||i==k)
			printf("%c ",(i-x+1)+64);
			else
			printf("  ");
			}
			else {
			if(k+i==4*x-1||k-i==2*x-1)
			printf("%d ",(i-x+1));
			else
			printf("  ");
			}
		}
	printf("\n");	
	}
	for(i=1;i<=x-1;i++) {  //half bottom
		for(k=1;k<=4*x-2;k++) {
			if(k<=2*x-1) {
			if(i+k==x||k-i==2*x-x)
			printf("%c ",i+65);
			else
			printf("  ");
			}
			else {
			if(i+k==2*x+(x-1)||k-i==4*x-(x+1))
			printf("%d ",i+1);
			else
			printf("  ");
			}
		}
	printf("\n");	
	}
}
