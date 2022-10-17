#include<stdio.h>
#include<string.h>
main () {
	char x[20],y[17],z[17],j[17];
	int i,k,a[17],b[17],sum=0;
	printf("Enter Credit : ");
	gets(x);
	k=0;
	for(i=0;i<19;i++) {
		if(x[i]!='-') {
			y[k]=x[i];
			k=k+1;
		}
	}
	for(i=15;i>=0;i--) {
		z[15-i]=y[i];
	}
	for(i=0;i<16;i++) {
		a[i]=z[i]-'0';
	}
	for(i=0;i<16;i++) {
		if(i+1%2==0) {
			b[i]=a[i]*2;
			if(b[i]>=10)
			b[i]=1+(b[i]%10);
		}
		else
		b[i]=a[i];
		sum=sum+b[i];
	}
	if(sum%10==0)
	printf("the credit is exist.");
	else
	printf("the credit is not exist.");
}
	

	
	

	

