#include<stdio.h>
main ()
{
	int n,a[n], i,min,max,sum=0,k;
	printf("total num : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	printf("enter num : ");
	scanf("%d",&a[i]);
	if(a[i]<0||a[i]>100)
	printf("Invalid input");
	sum=sum+a[i]; }
	min=a[1];
	max=a[1];
	for(i=1;i<=n;i++) { 
	if(a[i]>max)
	max=a[i];
	else if(a[i]<min)
	min=a[i]; }	
	printf("min=%d\n",min);
	printf("max=%d\n",max);
	printf("sum=%d\n",sum);
	printf("average=%d\n",sum/n);
	}
	
	
