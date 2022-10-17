#include<stdio.h> 
main () {
	int i,k;
	char num[14],b[18];
	scanf("%s",num);
	for(i=0;i<=13;i++) {
	if(i==0) 
		b[0]=num[0];
	else if(i>=1&&i<=4) 
		b[i+1]=num[i];
	else if(i>=5&&i<=9) 
		b[i+2]=num[i];
	else if(i>=10&&i<=11)
		b[i+3]=num[i];
	else if(i==12)
		b[i+4]=num[i];
	}
	for(i=0;i<17;i++) {
	if(i==1||i==6||i==12||i==15)
		b[i]='-';
		printf("%c",b[i]);
	}
	}
