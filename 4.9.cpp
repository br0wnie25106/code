#include<stdio.h>
main() {
	int a,i,k,b;
	printf("Enter : ");
	scanf("%d",&a);
	b=a*2;
	for(i=1;i<=a;i++) {
		for(k=1;k<=b;k++) {
			if(i==k)
			printf("\\");
			else if(i+k==(a*2)+1)
			printf("/");
			else printf(" ");
		}
	printf("\n");
	}
}
