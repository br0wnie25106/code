#include<stdio.h>
#include<string.h>
main () {
	int i,k,b[5];
	char a[4][20];
	for(i=0;i<4;i++) {
		printf("Enter text%d : ",i+1);
		scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	for(i=0;i<4;i++) {
		printf("%s : %d\n",a[i],b[i]);
	}
}
