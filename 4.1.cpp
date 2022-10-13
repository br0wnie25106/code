#include <stdio.h>
int main() {
    int a,b=1,i;
    printf("Enter positive number : ");
    scanf("%d",&a);
    if(a>=2) {
        for(i=1;i<=a;i++) {
            b=b*i;
        }
        for(i=1;i<=a;i++) {
            if(i!=a)
        printf(" %d *",i); 
            else printf(" %d ",i);
        }
        printf("= %d",b);
    }
}


