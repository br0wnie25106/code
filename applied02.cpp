#include<stdio.h>
main() {
	int i,a[1000],n,m,M;
	printf("Enter num1 : ");
	scanf("%d",&a[0]);
	m=a[0];
	M=a[0];
	for(i=1;a[i]!=-1009;i++) {
		printf("Enter num%d : ",i+1);
		scanf("%d",&a[i]);
		if(a[i]==-1009)
		break;
		if(a[i]<m)
		m=a[i];
		else if(a[i]>M)
		M=a[i];
		}
	printf("%d",M-m);
}

