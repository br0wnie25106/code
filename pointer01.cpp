#include <stdio.h>

int main() {
    int x[10],i,sum=0;
	int *p;
    for(i=0;i<10;i++) {
		printf("enter num%d : ",i+1);
		scanf("%d",&x[i]);
	}
	p=x;
	for(i=0;i<10;i++) {
		sum=sum+*p;
		p++;
	}

    printf("sum is %d",sum);
}



