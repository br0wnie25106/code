#include<stdio.h>
#include<math.h>

int a,b;
	int ans() {
		int c,A;
		c=sqrt(pow(a,2)+pow(b,2));
		A=c+a+b;
		printf("%d",A);	
	}
	int main() {
		scanf("%d %d",&a,&b);
		ans();
	}
	

