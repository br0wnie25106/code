#include<stdio.h>
main(){
	int number, i=1, a=0;
	printf("Enter number: ");
	scanf("%d", &number);
	while(i<=number){
	if(number%i==0){
		//printf("%d\n", i);
		a++;
	}
	i++;
}
	if(a==2){
		printf("this is prime number.");
	}
}
