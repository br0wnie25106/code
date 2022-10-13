#include<stdio.h>
main() {
	int a[5] = {-1,6,9,2,-9},i,count=0,k,b[5];
	for(i=0;i<=4;i++){
		if(a[i]>=0){
		b[i]=a[i]*1;
		}		
		else{
		b[i]=(-1)*a[i];
		}
	}
	for(i=0;i<=4;i++)
	printf("%d\t",b[i]);
}
