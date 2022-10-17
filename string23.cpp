#include<stdio.h>
#include<string.h>
main () {
	char str1[100],str2[100],x1[100],y1[100],x2[100],y2[100],up1[100],low1[100],up2[100],low2[100],n1[100],n2[100];
	int i,k,a,b,M,even1,even2,odd1,odd2,maxe,maxo;
	printf("input string1 : ");
	gets(str1);
	printf("input string2 : ");
	gets(str2);
	printf("\n");
	a=strlen(str1);
	b=strlen(str2);
	if(a>=b)
	M=a;
	else
	M=b;
	k=0;
	for(i=0;i<a;i++) { 
		if((i+1)%2==0&&str1[i]!='\0') { 
		x1[k]=str1[i];
		k=k+1;
		}  //even num
	}
	k=0;
	for(i=0;i<a;i++) {  
		if((i+1)%2!=0&&str1[i]!='\0') {
		x2[k]=str1[i]; 
		k=k+1;
		}
	}
	k=0;
	for(i=0;i<b;i++) { 
		if((i+1)%2==0&&str2[i]!='\0')  {
		y1[k]=str2[i];
		k=k+1;
		}
	}
	k=0;
	for(i=0;i<b;i++) {  
		if((i+1)%2!=0&&str2[i]!='\0') {
		y2[k]=str2[i]; 
		k=k+1;
		}
	}
	even1=strlen(x1);
	even2=strlen(y1);
	odd1=strlen(x2);
	odd2=strlen(y2);
	if(even1>=even2)
	maxe=even1;
	else
	maxe=even2;
	if(odd1>=odd2)
	maxo=odd1;
	else
	maxo=odd2;
	
	printf("Result of Even Position = ");
	for(i=0;i<maxe;i++) {   
		if(i<even1)
		printf("%c",x1[i]);
		if(i<even2)
		printf("%c",y1[i]);
	}
	
	printf("\nResult of Odd Position = ");
	for(i=0;i<maxo;i++) {
		if(i<odd1)
		printf("%c",x2[i]);
		if(i<odd2)
		printf("%c",y2[i]);
	}
	printf("\nResult of String 1&2 = ");
	for(i=0;i<M;i++) {
		if(i<a)
		printf("%c",str1[i]);
		if(i<b)
		printf("%c",str2[i]);
	}
	
	for(i=0;i<a;i++) {
		if(str1[i]>='a'&&str1[i]<='z') 
			up1[i]=str1[i]-32;
		else
			up1[i]=str1[i];
		if(str1[i]>='A'&&str1[i]<='Z')
			low1[i]=str1[i]+32;
		else
			low1[i]=str1[i];	
	}
	
	for(i=0;i<b;i++) {
		if(str2[i]>='a'&&str2[i]<='z') 
			up2[i]=str2[i]-32;
		else
			up2[i]=str2[i];
	
		if(str2[i]>='A'&&str2[i]<='Z') 
			low2[i]=str2[i]+32;
		else
			low2[i]=str2[i];
	}
	
	printf("\nResult of Upper String 1&2 = ");
	for(i=0;i<a;i++) {
		printf("%c",up1[i]);
	}
	for(i=0;i<b;i++) {
		if(i==0)
		printf(" ");
		printf("%c",up2[i]);
	}
	printf("\nResult of Lower String 1&2 = ");
	for(i=0;i<a;i++) {
		printf("%c",low1[i]);
	}
	for(i=0;i<b;i++) {
		if(i==0)
		printf(" ");
		printf("%c",low2[i]);
	}
	
	for(i=0;i<a;i++) {
		if(str1[i]>='a'&&str1[i]<='z') 
			n1[i]=str1[i]-32;
		else if(str1[i]>='A'&&str1[i]<='Z')
			n1[i]=str1[i]+32;
		
	}
	for(i=0;i<b;i++) {
		if(str2[i]>='a'&&str2[i]<='z') 
			n2[i]=str2[i]-32;
		else if(str2[i]>='A'&&str2[i]<='Z')
			n2[i]=str2[i]+32;
	}
	printf("\nResult of Reverse String = ");
	for(i=0;i<a;i++) {
		printf("%c",n1[i]);
	}
	for(i=0;i<b;i++) {
		if(i==0)
		printf(" ");
		printf("%c",n2[i]);
	}
	
}
