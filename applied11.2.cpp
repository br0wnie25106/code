#include<stdio.h>
#include<math.h>
main () {
	int b,i,k,a;
	scanf("%d",&a); 
	int g[31];
	for(i=0;pow(2,i)<=a;i++) {
		b=i; 
	}
	for(k=b;k>=0;k--) {
		if(pow(2,k)<=a) {
		a=a-pow(2,k); 
		g[k]=1;
		}
		else
		g[k]=0;
	}
	for(i=b;i>=0;i--) {
		printf("%d",g[i]);
	}
}
