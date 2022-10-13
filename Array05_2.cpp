#include<stdio.h>
main(){
	int a,b,j[3][2];
	for(a=0;a<3;a++){
		for(b=0;b<2;b++){
			printf("Input i[%d][%d] : ",a,b);
			scanf("%d",&j[a][b]);
			}
			}
	for(b=0;b<2;b++){
		for(a=0;a<3;a++){
	printf("%d\t",j[a][b]);
	}
	printf("\n");
}
}


