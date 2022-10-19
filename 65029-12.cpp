#include<stdio.h>
int fibo(int n,int x[]) {
	int i;
	for(i=0;i<n;i++) {
		printf("%d ",x[i]);
		x[i+2]=x[i]+x[i+1];
		}
	}


int main () {
	int n;
	scanf("%d",&n);
	int x[n+2];
	x[0]=0;
	x[1]=1;
	fibo(n,x);
}
