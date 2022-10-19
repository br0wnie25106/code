#include<stdio.h>

int a;

int minmax(int arr[],int size) {
	int m,M,i,x[a];
	m=x[0];
	M=x[0];
	
	for(i=1;i<size;i++) {
		if(arr[i]>M)
		M=arr[i];
	}
	
	for(i=1;i<size;i++) {
		if(arr[i]<m)
		m=arr[i];
	}
	printf("The largest element in the array is : %d\n",M);
	printf("The smallest element in the array is : %d",m);	
}

int main () {
	int i;
	printf("Number of elements : ");
	scanf("%d",&a);
	int x[a];
	for(i=0;i<a;i++) {
		printf("element - %d : ",i);
		scanf("%d",&x[i]);
	}
	minmax(x,a);
}
