#include<stdio.h>
main() {
	int k,n,i,f,g;
	printf("Enter : ");
	scanf("%d",&n);
	for(k=1;k<=n;k++) {
		for(i=1;i<=n-k;i++) {
			printf(" ");
		}
		for(f=1;f<=k;f++) {
			printf("%d",f);
		}
		for(g=k-1;g>0;g--) {
			printf("%d",g);
		}
		printf("\n");
	}
}
