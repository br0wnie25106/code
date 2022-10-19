#include<stdio.h>
#include<math.h>

float s,c,t;
	int trigo() {
		int i;
		for(i=0;i<90;i+=5) {
			s=sin(i*(M_PI)/180);
			c=cos(i*(M_PI)/180);
			t=tan(i*(M_PI)/180);
			printf("%.4f\t\t%.4f\t\t%.4f\n",s,c,t);
		}
	}
	int main() {
		printf("sin\t\tcos\t\ttan\n");
		trigo();
	}


