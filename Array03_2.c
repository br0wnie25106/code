#include<stdio.h>
main(){
int a[21],i,k;
for(i=0;i<=20;i++){
	printf("Input %d : ",i);
	scanf("%d",&a[i]);
}
printf("Element\t value\t llistogram\n");
for(i=0;i<=20;i++){
	printf("%d\t %d\t",i,a[i]);
	for(k=1;k<=a[i];k++){
	printf("*");
	}
	printf("\n");
}
}
