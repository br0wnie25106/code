#include<stdio.h>
#include<string.h>

main () {
char x[100],*p;
int i;
printf("enter text : ");
gets(x);
p=&x;

printf("Upper : ");
for(p=x;*p!='\0';p++) {
if(*p>='a'&&*p<='z') {
*p=*p-32;
printf("%c",*p);
}
else if(*p>='A'&&*p<='Z')
    printf("%c",*p);
}

}
