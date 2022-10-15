#include<stdio.h>
main() {
	int a,b[100],i,k,c=0,f=1,d;
	scanf("%d",&a);  
	for(i=2;i<=541;i++) {
		for(k=2;k<=i;k++) {
			if(i%k==0)
			c=c+1;
		}
		if(c==1) {
			b[f]=i;
			f++;
		}
		c=0;
		}
	for(d=1;d<=a;d++) {
	printf("%d ",b[d]);
	}
}
	
