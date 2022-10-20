#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int f(int x[],int n) {
	if(n%2==0) {
		for(int i=0;i<=(n/2)-1;i++) {
			for(int j=i+1;j<=(n/2)-1;j++) {
			if(x[i]<x[j]) {
				int t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
		}
		for(int i=0;i<=(n/2)-1;i++) {
			printf("%d ",x[i]);
		}
		printf("| ");
		for(int i=n/2;i<n;i++) {
			for(int j=i+1;j<n;j++) {
			if(x[i]>x[j]) {
				int t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
		}
		for(int i=n/2;i<n;i++) {
			printf("%d ",x[i]);
		}
	}
	else {
		for(int i=0;i<=(n/2);i++) {
			for(int j=i+1;j<=(n/2);j++) {
			if(x[i]<x[j]) {
				int t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
		}
		for(int i=0;i<=(n/2);i++) {
			printf("%d ",x[i]);
		}
		printf("| ");
		for(int i=(n/2)+1;i<n;i++) {
			for(int j=i+1;j<n;j++) {
			if(x[i]>x[j]) {
				int t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
		}
		for(int i=(n/2)+1;i<n;i++) {
			printf("%d ",x[i]);
		}
	}
}

main () {
	int n;
	scanf("%d",&n);
	int x[n];
	srand(time(NULL));
	for(int i=0;i<n;i++) {
		x[i]=rand()%99+1;
		printf("%d ",x[i]);
	}
	printf("\n");
	f(x,n);
}
