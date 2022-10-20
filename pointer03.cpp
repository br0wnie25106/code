#include<stdio.h>
#include<string.h>
int main(){
    char x[99];
    char y[99];
    scanf("%s",x);
    scanf("%s",y);
    if(strlen(x)!=strlen(y)){
        printf("no");
        return 0;
    }
    for(int i=0;i<strlen(x);i++){ 
        char t=x[i];
        int xc=0,yc=0;
        for(int j=0;j<strlen(x);j++){
            if(t==x[j]){
                xc++;  
            }
        }
        for(int j=0;j<strlen(x);j++){
            if(t==y[j]){
                yc++;  
            }
        }
        if(xc!=yc){
            printf("no");
            return 1;
        }
    }
    printf("yes");
    return 2;
}

