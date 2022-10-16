#include<stdio.h>
main() {
	int x=0,i,k,s;
	printf("Enter digits : ");
	scanf("%d",&s);
	int a[s],b[s];
	for(i=0;i<s;i++) {
		scanf("%1d",&a[i]);
	}
	for(i=0;i<s;i++) { 
		for(k=0;k<s;k++) {
			if(a[i]==a[k]) {
				x=x+1; 
				b[i]=x;  
			}
		}
		x=0;
	}
	for(i=0;i<s;i++) { 
		for(k=i+1;k<s;k++) {
			if(a[i]==a[k]) {
				a[k]='u';
			}
		}
	}
	for(i=0;i<s;i++) {
		if(a[i]!='u') {
		printf("%d = %d\n",a[i],b[i]); }
	}
} //error at output : it also show the duplicate a[i]
