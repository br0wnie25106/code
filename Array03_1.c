#include<stdio.h>
main(){
int a[21],i;
for(i=0;i<=20;i++){
	printf("Input %d : ",i);
	scanf("%d",&a[i]);
}
printf("Element\t value\n");
for(i=0;i<=20;i++){
	printf("%d\t %d\n",i,a[i]);
}
}
