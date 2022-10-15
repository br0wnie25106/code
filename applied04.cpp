#include<stdio.h>
main () {
	int a,b,k,i;
	scanf("%d",&a);
	for(k=1;k<=a;k++) {
		for(i=1;i<=a*2;i++) {
			if(i==k)
			printf("\\");
			else if(i+k==a*2+1)
			printf("/");
			else printf(" ");
		}
		printf("\n");
	}
}
