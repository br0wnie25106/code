#include<stdio.h>
#include<math.h>

int a,b;
	int prime() {
		int i,k=0;
		for(i=1;i<=a;i++) {
			if(a%i==0)
			k=k+1;
		}
		if(k==2)
		printf("yes");
		else 
		printf("no");
	}
	int main() {
		scanf("%d",&a);
		prime();
	}
	

