#include<stdio.h>
main () 
{
	int b,i,n,k;
	printf("Enter num : ");
	scanf("%d",&b);
	for(i=1;i<=b;i++) {
		for(n=i;n<=i;n++) {
			for(k=1;k<=n;k++)
			printf("%d\t",n*k);
		}
	printf("\n");
	}	
}
