#include<stdio.h>
#include<math.h>

int arms(int x) {
int i,a,sum=0,y,k,g;
g=x;
for(i=0;;i++) {
if(pow(10,i)>=x) {
a=i; //digits
break; }
}
for(i=a;i>=0;i--) {
    k=x/pow(10,i-1);
    y=pow(k,a);
    sum=sum+y;
    x=x-k*(pow(10,i-1));
    if(x==0)
        break;
}

if(g==sum)
    printf("Yes");
else printf("NO");
}

int main() {
int x;
printf("Enter number : ");
scanf("%d",&x);
arms(x);
}
