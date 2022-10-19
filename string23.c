#include<stdio.h>
#include<string.h>
int main(){
    printf("**************************************\nInput String1 : ");
    char x[9999],y[9999];
    scanf("%s",x);
    printf("Input String2 : ");
    scanf("%s",y);
    printf("**************************************\n");
    int k;
    if(strlen(x)>strlen(y))k=strlen(x);
    if(strlen(y)>=strlen(x))k=strlen(y);
    printf("Result of Even Position    = ");
    for(int i=1;i<k;i+=2){
        if(x[i]!=NULL)printf("%c",x[i]);
        if(y[i]!=NULL)printf("%c",y[i]);
    }
    printf("\nResult of odd Position     = ");
    for(int i=0;i<k;i+=2){
        if(x[i]!=NULL)printf("%c",x[i]);
        if(y[i]!=NULL)printf("%c",y[i]);
    }
    printf("\nResult of 1&2              = ");
    for(int i=0;i<k;i++){
        if(x[i]!=NULL)printf("%c",x[i]);
        if(y[i]!=NULL)printf("%c",y[i]);
    }
    printf("\nResult of Upper String     = ");
    for(int i=0;i<k;i++){
        if(x[i]!=NULL){
            if(x[i]>=97&&x[i]<=122){
                printf("%c",x[i]-32);
            }
            else{
                printf("%c",x[i]);
            }
        }
    }
    printf(" ");
    for(int i=0;i<k;i++){
        if(y[i]!=NULL){
            if(y[i]>=97&&y[i]<=122){
                printf("%c",y[i]-32);
            }
            else{
                printf("%c",y[i]);
            }
        }
    }
    printf("\nResult of Lower String     = ");
    for(int i=0;i<k;i++){
        if(x[i]!=NULL){
            if(x[i]>=65&&x[i]<=90){
                printf("%c",x[i]+32);
            }
            else{
                printf("%c",x[i]);
            }
        }
    }
    printf(" ");
    for(int i=0;i<k;i++){
        if(y[i]!=NULL){
            if(y[i]>=65&&y[i]<=90){
                printf("%c",y[i]+32);
            }
            else{
                printf("%c",y[i]);
            }
        }
    }
    printf("\nResult of Reverse String   = ");
    for(int i=0;i<k;i++){
        if(x[i]!=NULL){
            if(x[i]>=97&&x[i]<=122){
                printf("%c",x[i]-32);
            }
            else{
                printf("%c",x[i]+32);
            }
        }
    }
    printf(" ");
    for(int i=0;i<k;i++){
        if(y[i]!=NULL){
            if(y[i]>=97&&y[i]<=122){
                printf("%c",y[i]-32);
            }
            else{
                printf("%c",y[i]+32);
            }
        }
    }
    printf("\n**************************************");
}
