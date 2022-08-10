#include<stdio.h>
main() {
	int i,m=0;
	char a[21];
	printf("enter text : ");
	gets(a);
	for(i=0;a[i]!='\0';i++) {
		if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		m=m+1;
		else if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		m=m+1;
}
printf("there are %d vowels.",m);
}
