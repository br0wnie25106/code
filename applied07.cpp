#include<stdio.h>
main() {
	int x,k,r=1,y,g,f,n;
	char i;
	printf("enter a number : ");
	scanf("%d",&x); 
	for(f=1;n<=x;f++) {
		n=f*(f+1)/2; 
	}
	if(x<0)
	printf("invalid input");
	else if(x<=200) {
	for(k=1;k<=f;k++) {
		r=((k-1)*k/2)+1; //first num in each row
		while(r<=k*(k+1)/2) { 
			g=r%26;
			if(g==0)
			printf("%c",'Z');
			else
			printf("%c",g+64);
			r++;
			if(r>x)
			return 0;
		}
		printf("\n");
	}
	}
}
