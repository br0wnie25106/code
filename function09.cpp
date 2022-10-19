#include<stdio.h>
 int fac(int y) {
 int i;
 if(y==1)
 return y;
 else
 return y*fac(y-1);
 }

 int main() {
 int x,ans;
 printf("Enter num : ");
 scanf("%d",&x);
 ans = fac(x);
 printf("%d",ans);
 }
