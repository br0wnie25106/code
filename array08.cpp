#include<stdio.h>
main () {
	int i,a[11],k=0;
	for(i=0;i<10;i++) {
	scanf("%d",&a[i]);
	if(40%a[i]==0) {
	k=k+1; 
	}
	}
	printf("%d",k);
}
