#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main () {
int x,y,d,k,sum=0,i,a[3];
srand(time(NULL));
for(i=0;i<3;i++) {
d=rand()%6+1;
a[i]=d;
printf("dice : %d\n",d);
sum=sum+d;
}
printf("three : %d\n",sum);

if(a[0]==a[1]&&a[0]==a[2])
    printf("three of a kind");
else if(sum>=4&&sum<=10)
    printf("low");
else ;if(sum>=11&&sum<=17)
    printf("high");

}
