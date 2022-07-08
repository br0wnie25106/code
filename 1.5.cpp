#include<stdio.h>
main()
{
	int AD, BE, a1 ,a2, b1, b2, c1, c2, d1, d2 ,totalBE, totalAD;
	printf("enter AD: ");
	scanf("%d",&AD);
	BE = AD+543;
    a1 = BE%10;
	BE = BE/10;
	b1 = BE%10;
	BE = BE/10;
	c1 = BE%10;
	BE = BE/10;
	d1 = BE%10;
	totalBE= a1+b1+c1+d1;
	a2 = AD%10;
	AD = AD/10;
	b2 = AD%10;
	AD = AD/10;
	c2 = AD%10;
	AD = AD/10;
	d2 = AD%10;
	totalAD= a2+b2+c2+d2;
	printf("totalBE=%d\n",totalBE);
	printf("totalAD=%d\n",totalAD);
}
	
