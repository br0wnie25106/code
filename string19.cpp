#include<stdio.h>
#include<string.h>
main () {
	char x[100];
	int i,k,a=0,b=0,c=0;
	printf("Enter text : ");
	scanf("%s",x);
	i=strlen(x);
	printf("text sixe : %d\n",i);
	for(k=0;k<i;k++) {
		if(x[k]>='1'&&x[k]<='9')
		a=a+1;
		if((x[k]>='a'&&x[k]<='z')||(x[k]>='A'&&x[k]<='Z'))
		b=b+1;
		if(x[k]=='a'||x[k]=='e'||x[k]=='i'||x[k]=='o'||x[k]=='u'||x[k]=='A'||x[k]=='E'||x[k]=='I'||x[k]=='O'||x[k]=='U')
		c=c+1;
	}
	printf("including %d number, %d character, %d vowels",a,b,c);
}
