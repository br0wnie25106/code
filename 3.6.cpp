#include<stdio.h>
main()
{
	char x,i;
	printf("enter char : ");
	scanf("%c",&x);
	if(x>='A'&&x<='Z')
	{
	for(x;x>='A';x--)
	{
		printf("%c\n",x);
	}
	}
	else if(x>='a'&&x<='z')
	{
		x=x-32;
	for(x;x>='A';x--)
		printf("%c\n",x);
	}
}
