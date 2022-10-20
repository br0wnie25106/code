#include<stdio.h>
main () {
	int a[11]={18,20,32,2,0,-5,15,102,90,1};
	a[10]=99999;
	for(int i=0;i<10;i++) {
		for(int j=0;j<10;j++) { //j=4
			if(a[i]>a[j+1]) { //18>0
				int t=a[j+1]; //t=a[4+1]
				a[j+1]=a[j];  //a[4+1]=a[4]
				a[j]=t;       //2=0;
			}
		}
	}
	for(int i=0;i<10;i++) {
		printf("%d ",a[i]);
	}
}
