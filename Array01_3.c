#include<stdio.h>
main(){
	int i,score[10],sum=0;
	float avr;
	for(i=0;i<=9;i++)
	{
		printf("Input score %d : ",i+1);
		scanf("%d",&score[i]);
		sum=sum+score[i];
	}
	avr=sum/10.00;
	printf("total score is %d\n",sum);
	printf("average score is %.2f",avr);
	return 0;
}
