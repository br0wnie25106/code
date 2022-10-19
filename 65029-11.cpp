#include<stdio.h>

int fibo(int x) {
int k[200],i;
k[0]=0;
k[1]=1;
printf("0 1 ");
for(i=2;i<x;i++) {
k[i]=k[i-1]+k[i-2];
printf("%d ",k[i]);
}

}

int main () {
int x;
printf("Enter number : ");
scanf("%d",&x);
fibo(x);
}
