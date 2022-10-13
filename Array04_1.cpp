#include<stdio.h>
main(){
	int a,b, arr[3][3];
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("Input arr[%d][%d] : ",a,b);
			scanf("%d",&arr[a][b]);
			}
			}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
	printf("%d\t",arr[a][b]);
	}
	printf("\n");
}
}

