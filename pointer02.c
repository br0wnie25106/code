#include <stdio.h>

int f(char *y,char *x) {
    while(*x) {
        *y=*x;
        y++;
        x++;
    }
    *y='\0';
}

int main() {
    char x[10],y[10];
    gets(x);
    f(y,x);
    printf("text1 : %s\n",x);
    printf("text2 : %s",y);
}



