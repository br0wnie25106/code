#include<stdio.h>
#include<math.h>
main() {
	int n,m,i,k,g=0,b,r,s,f,e,c[100],q;
	int a[100];
	scanf("%d %d",&n,&m); 
	if(n>=m) {
		printf("invalid input");
		return 0;
	}
	for(i=0;i<=9;i++) {  
	for(e=n;e<=m;e++) {  
	for(r=0;e>=pow(10,r);r++) {  
	q=r;  
	} 
	b=e; 
	for(f=q;f>=0;f--) {  
		a[f]=b/pow(10,f);  
		b=b-a[f]*pow(10,f);  
	}
	for(f=q;f>=0;f--) { 
		if(a[f]==i) { 
			g=g+1; 
		}
	}
	}
	c[i]=g;
	printf("%d : %d\n",i,c[i]);
	g=0;		
	}
}

