#include<stdio.h>
main()
{
	int a,b,i;
	printf("enter num1 : ");
	scanf("%d",&a);
	printf("enter num2 : ");
	scanf("%d",&b);
	for(i=1;i<=1000;i++)
	{
		if(i%a==0&&i%b==0)
		printf("%d\n",i);
	}
}
