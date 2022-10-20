#include<stdio.h>
#include<math.h>
#include<string.h>
main () {
	char x[200];
	int a,b[200],c=0;
	scanf("%s",x);
	a=strlen(x);
	for(int i=0;i<a;i++) {
		b[i]=x[i]-'0';
		if(b[i]%2!=0)
		c++;
	}
	printf("there are %d odd number position.",c);
	
	
}
