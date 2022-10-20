#include<stdio.h>
#include<string.h>

main () {
	char x[200],y[200],f[200];
	printf("Enter text : ");
	scanf("%s",x);
	printf("looking for : ");
	scanf("%s",y);
	int c=0,t=0;
	for(int i=0;i<strlen(x);i++) {
		for(int j=0;j<strlen(y);j++) {
			if(x[i+j]==y[j]) {
				c++;
			}
			if(c==strlen(y)) {
				printf("%d",i+1);
				return 0;
			}
		}
		c=0;
	}
	printf("0");	
}
