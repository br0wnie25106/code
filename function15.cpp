#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main () {
int x,y,d,k;
srand(time(NULL));
d=rand()%6+1;
printf("dice : %d\n",d);
if(d>=1&&d<=3)
    printf("low");
else ;if(d>=4&&d<=6)
    printf("high");
}
