#include<stdio.h>
main () {
	int i,a[6],m,M,k,r;
	scanf("%d",&i);
	for(k=0;k<i;k++) {
		printf("Enter num : ");
		scanf("%d",&a[k]);
	}
	m=a[0];
	M=a[0];
	for(r=1;r<i;r++) {
		if(a[r]>M)
		M=a[r];
		else if(a[r]<m)
		m=a[r]; }
	printf("min : %d\n",m);
	printf("max : %d",M);
}

