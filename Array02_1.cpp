#include<stdio.h>
main() {
	int a[5] = {-1,6,9,2,-9};
	int max = a[0];
	for (int i=1;i<5;i++){
	if(a[i]>max)
	max = a[i];
	}  
	printf("Max : %d\n",max);
}
