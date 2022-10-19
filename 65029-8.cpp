#include<stdio.h>
 int fac(int y) {
 int i,f=1;
 for(i=1;i<=y;i++) {
 f=f*i;
 }
 printf("factorial is %d",f);
 }

 int main() {
 int x;
 printf("Enter num : ");
 scanf("%d",&x);
 fac(x);
 }
