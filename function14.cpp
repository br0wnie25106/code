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
printf("Correct!!!");
break;
}
if(b>y)
printf("The number is too low. Try again.\n");
if(b<y)
printf("The number is too high. Try again.\n");
}
}
