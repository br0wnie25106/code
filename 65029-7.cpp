#include<stdio.h>


int perf(int y) {
	int i,k[200],sum=0,a=0;
	for(i=1;i<=y;i++) {
		if(y%i==0) {
			k[a]=i;
			a++;
		}
	}
	for(i=0;k[i]!=y;i++) {
		sum=sum+k[i];
	}
	if(sum==y)
	printf("Yes");
	else
	 printf("No");
}

int main () {
	int i,x;
	scanf("%d",&x);
	perf(x);
}

