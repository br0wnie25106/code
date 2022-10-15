#include<stdio.h>
main () {
	int a,b=0,c,i,k;
	scanf("%d",&a);
	if(a<=4) {
		for(i=1;i<=a;i++) {
			for(k=1;k<=i;k++) {
				printf("%d",k);
			}
		printf("\n");
		}
	printf("No Answer");
	}
	else if(a>4) {
		for(i=1;i<=a;i++) {
			for(k=1;k<=i;k++) {
				printf("%d",k);
				b=b+k;
			}
		printf("\n");
		}
	c=b-((a-2)+(a*(a-1)/2)+(a*(a+1)/2));
	printf("%d",c);
	}
}
