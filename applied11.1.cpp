#include<stdio.h>
#include<math.h>
main () {
	int b,i,k,a;
	scanf("%d",&a); 
	for(i=0;pow(2,i)<=a;i++) {
		b=i;  
	}
	for(k=b;k>=0;k--) { 
		if(pow(2,k)<=a) {  
		a=a-pow(2,k);  
		printf("1");
		}
		else
		printf("0");
	}
}
