#include<stdio.h>
main () {
	int i,a[6],m,M,k,r;
	for(k=0;k<5;k++) {
		printf("Enter num : ");
		scanf("%d",&a[k]);
	}
	for(i=0;i<5;i++) {
		printf("%d\t",a[i]);
		for(m=1;m<=a[i];m++)
		printf("*");
		printf("\n");
	}
	
}

