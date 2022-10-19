#include<stdio.h>
 int fac(int y) {
 int i,f=1,sum=0;
 for(i=1;i<=y;i++) {
 f=f*i;
 sum=sum+f;
 }
 printf("factorial sum is %d",sum);
 }

 int main() {
 int x;
 printf("Enter num : ");
 scanf("%d",&x);
 fac(x);
 }


