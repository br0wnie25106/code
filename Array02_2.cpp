#include<stdio.h>
main() {
	int a[5] = {-1,6,9,2,-9};
	int min = a[0];
	for (int i=1;i<5;i++){
	if(a[i]<min)
	min = a[i];
	}  
	printf("Min : %d\n",min);
}
