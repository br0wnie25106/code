#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
int x,y,b,k;
srand(time(NULL));
b=rand()%100+1;

for(k=0;;k++) {
printf("Enter number");
scanf("%d",&y);
if(b==y) {
printf("you guessed %d times wrong",k);
break;
}
}
}
