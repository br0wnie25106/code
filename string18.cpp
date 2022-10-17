#include<stdio.h>
#include<string.h>
int main () {
	char name[50],sur[50],g[6];
	char g1[6] = "Male";
	int cmp;
	printf("Enter name : ");
	gets(name);
	printf("Enter surname : ");
	gets(sur);
	printf("Enter gender : ");
	gets(g);
	cmp=strcmp(g,g1);
	if(cmp==0)
	printf("Mr.%s %s",name,sur);
	else
	printf("Mrs.%s %s",name,sur);
}
