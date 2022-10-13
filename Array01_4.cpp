#include<stdio.h>
main(){
	int i,score[10],a=0,b=0;
	for(i=0;i<=9;i++)
	{
		printf("Input score %d : ",i+1);
		scanf("%d",&score[i]);
		if(score[i]>=50)
		a=a+1;
		else
		b=b+1;
	}
	printf("There are %d ppl pass the exam.\n",a);
	printf("There are %d ppl fail the exam.",b);
	return 0;
}
