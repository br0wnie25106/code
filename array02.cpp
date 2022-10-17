#include<stdio.h>
main () {
	int i,N;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++) {
	scanf("%d",&a[i]);
	}
	for(i=N-1;i>=0;i--)
	printf("%d\n",a[i]);
}
