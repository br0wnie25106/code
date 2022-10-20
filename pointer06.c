#include<stdio.h>
main () {
    char x[100],*p;
    int i,k=0;
    printf("enter text : ");
    gets(x);
    p=&x;
    for(p=x;*p!='\0';p++) {
    if(*p>='A'&&*p<='Z') {
    printf("invalide input");
    return 0; }
    }

    for(p=x;*p!='\0';p++) {
    if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
    k++;
    }
    printf("There are %d vowels.",k);
}
