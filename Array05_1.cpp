#include<stdio.h>
main(){
	int a,b, i[3][2],j[3][2];
	for(a=0;a<3;a++){
		for(b=0;b<2;b++){
			printf("Input i[%d][%d] : ",a,b);
			scanf("%d",&i[a][b]);
			}
	}
	for(a=0;a<3;a++){
		for(b=0;b<2;b++){
			printf("Input j[%d][%d] : ",a,b);
			scanf("%d",&j[a][b]);
			}
		}
	for(a=0;a<3;a++){
		for(b=0;b<2;b++){
	printf("%d\t",i[a][b]+j[a][b]);
	}
	printf("\n");
}
}

