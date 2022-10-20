#include<stdio.h>
main () {
	int a[10]={0,0,0,0,0,0,4,2,4,0},b[10]={0,0,0,0,0,0,9,7,9,5}, c[10]={};
	int *p=a;
	int h=0;
	p+=9;
	int *q=b;
	q+=9;
	int *r=c;
	r+=9;
	for(int k=10;k>0;k--,p--,q--,r--) {
		if(*p+*q+h<10) {
			*r=*p+*q+h;
			h=0;
			continue;
		}
		*r=(*p+*q+h)%10;
		h=1;
	}
	r++;
	int cc=0;
	for(int k=0;k<10;k++,r++) {
		if(*r==0&&cc==0) {
			continue;
		}
		printf("%d",*r);
		cc++;
	}	
}
