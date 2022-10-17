#include<stdio.h>
#include<string.h>
main () {
	int w,k,a=0,e=0,i=0,o=0,u=0;
	char x[1000],y[1000],z[1000];
	printf("Input String1 ==> ");
	gets(x);
	w=strlen(x);
	printf("Length of String ==> %d Characters\n",w);
	for(k=0;k<w;k++) {
		y[k]=x[w-k-1];
	}
	printf("Reverse string ==> %s\n",y);
	for(k=0;k<w;k++) {
		if(x[k]>='a'&&x[k]<='z')
		z[k]=x[k]-32;
		else
		z[k]=x[k];
	}
	printf("Upper String ==> %s\n",z);
	printf("=-=-=-=-=-=-=-=-=-=\n");
	for(k=0;k<w;k++) {
		if(x[k]=='A'||x[k]=='a')
		a=a+1;
		else if(x[k]=='E'||x[k]=='e')
		e=e+1;
		else if(x[k]=='I'||x[k]=='i')
		i=i+1;
		else if(x[k]=='O'||x[k]=='o')
		o=o+1;
		else if(x[k]=='U'||x[k]=='u')
		u=u+1;
	}
	printf("Number of vowel\n");
	printf("=-=-=-=-=-=-=-=-=-=\n");
	printf("A or a = %d\n",a);
	printf("E or e = %d\n",e);
	printf("I or i = %d\n",i);
	printf("O or o = %d\n",o);
	printf("U or u = %d\n",u);
}
