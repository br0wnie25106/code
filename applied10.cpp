#include<stdio.h>
main() {
	int a,i,k,g;
	printf("enter num : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++) {
		for(k=a;k>=i;k--) 
			printf(" ");
		for(g=1;g<=i*2-1;g++) 
			printf("*");
		printf("\n");
		}
}	
