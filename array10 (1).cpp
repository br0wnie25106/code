#include<stdio.h>
main () {
	int n,i,k,r,Max=0,c,g,d=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++) {
		printf("Enter num%d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(k=0;k<n;k++) { 
		int c=0;
		for(r=k+1;r<n;r++) {
			if(a[k]==a[r]) 
			c++;
		}
		if(c>Max&&c!=0) {
			g=0;
			Max=c; 
			b[g]=a[k];  
			g++;
		}
		else if(c==Max) {
			b[g]=a[k]; 
			g++;
		}
	}
	for(k=0;k<n;k++)
	{
		if(a[k]==b[k])
		d++;
	}
		if(d==n||Max==0)
		printf("there is no mode.");
		else 
		{
		printf("Mode are ");
		for(k=0;k<g;k++)
		printf("%d,",b[k]);		
		}
		printf("\n");
		return 0;
}
	
	
	
	
