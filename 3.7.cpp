#include<stdio.h>
#include<math.h>
main()
{
    int a;
	float b,c;
	printf("enter num : ");
	scanf("%d",&a);
	if(a>=1)
	{
	for(b=1;a>=b;b++)
	{
	printf("%.2f\n",pow(b,2));
	}
	}
	else if(a<=1)
	{
		for(b=1;b>=a;b--)
		{
			printf("%.2f\n",pow(b,2));
		}
	}
}
