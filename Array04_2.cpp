#include<stdio.h>
#include<math.h>
main(){
	int a,b, arr[3][3], c[3][3];
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			printf("Input arr[%d][%d] : ",a,b);
			scanf("%d",&arr[a][b]);
			}
			}
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
		c[a][b] = pow(arr[a][b],2);
	printf("%d\t",c[a][b]);
	}
	printf("\n");
}
}

