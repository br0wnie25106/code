#include<stdio.h>
main() {
	int k,n,i,f,g;
	printf("Enter : ");
	scanf("%d",&n);
	for(k=1;k<=n;k++) {
		for(i=1;i<=n-k;i++) {
			printf(" ");
		}
		for(f=k-1;f>=0;f--) {
			printf("%d",f);
		}
		for(g=1;g<=k-1;g++) {
			printf("%d",g);
		}
		printf("\n");
	}
}
