#include<stdio.h> 
#include<string.h>
main() {
	int h,w,n,i,k,a,f,c,d,r;
	char x[10],b[1],j;
	printf("Input string ==> ");
	gets(x);
	i=strlen(x);
	j=x[0];
	printf("Height String ==> ");
	scanf("%d",&h);
	printf("Width String ==> ");
	scanf("%d",&w);
	printf("Border Character ==> ");
	scanf("%s",&b);
	printf("Border Width ==> ");
	scanf("%d",&n);
	printf("\n");
	a=(n*2)+(i*w);
	f=(n*2)+h;
	for(c=1;c<=f;c++) {  //c=3
		for(d=1;d<=a;d++) {  //d=3
			if(c>=1&&c<=n) 
			printf("%s",b);
			else if(c>=n+1&&c<=n+h)  //this
			{
			if((d>=1)&&(d<=n))
			printf("%s",b);
			else if((d<=a)&&(d>=a-(n-1)))
			printf("%s",b);
			else if((d-n-1)%i==0)
			printf("%c",j);
			else 
				{
				for(r=1;r<i;r++) {
				if((d-n-1)%i==r) 
				printf("%c",x[r]);
				}
				}
			}
			else if((c<=f)&&(c>=f-n+1))
			printf("%s",b);	
	}
	printf("\n");
}
}

