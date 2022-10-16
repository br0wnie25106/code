#include<stdio.h>
main () {
	int a,b,k,i;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a==1) {
	for(k=1;k<=b*2;k++) {
		for(i=1;i<=b;i++) {
			if(i+k==b+1)
			printf("/");
			if(k-i==b)
			printf("\\");
			else 
			printf(" ");
		}
	printf("\n");
	}
	}
	if(a==2) {
	for(k=1;k<=b*2;k++) {
		for(i=1;i<=b;i++) {
			if(i==k)
			printf("\\");
			if(k+i==2*b+1)
			printf("/");
			else 
			printf(" ");
		}
	printf("\n");
	}
	}
}
