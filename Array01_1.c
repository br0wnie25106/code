#include<stdio.h>
main(){
	int i,score[10];
	for(i=0;i<=9;i++)
	{
		printf("Input score %d : ",i+1);
		scanf("%d",&score[i]);
	}
	for(i=0;i<=9;i++)
	printf("%d\t",score[i]);
	return 0;
}
