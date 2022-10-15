#include<stdio.h>
main () {
	int a[3],i,k,b=0,M;
	for(i=0;i<3;i++) {
		scanf("%d",&a[i]);  
		b=b+a[i];
	}
	if(b!=100)
	printf("error");
	else {
	M=a[0];
	for(i=1;i<3;i++) {
		if(a[i]>M)
		M=a[i]; 
	}
	for(i=0;i<3;i++) {
	for(k=i+1;k<3;k++) {
	if(a[k]==a[i]&&(a[k]==M||a[i]==M)) { 
		printf("i love you;)");
		return 0;
		}
	}
	}
	if(M==a[0])
	printf("paper");
	else if(M==a[1])
	printf("rock");
	else if(M==a[2])
	printf("scissors");
	}
}
