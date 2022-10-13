#include<stdio.h>
main() {
	int x,k,r=1,y,g;
	char i;
	printf("enter a number : ");
	scanf("%d",&x);
	if(x<0)
	printf("invalid input");
	else if(x<=200) {
	for(k=1;k<=x;k++) {
		r=((k+1)*k/2);  
		while(r>=(k*(k-1)/2)+1) { 
			g=r%26;
			if(g==0)
			printf("%c",'Z');
			else
			printf("%c",g+64);
			r--;
		}
		printf("\n");
	}
	}
}
