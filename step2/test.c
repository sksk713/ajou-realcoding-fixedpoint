#include <stdio.h>
#include "fx_s3132_longlong.h"
#define Max 10000000

extern fx_s3132 fx_s3132_mul(fx_s3132 fa, fx_s3132 fb);
extern fx_s3132 fx_s3132_mul1(fx_s3132 fa, fx_s3132 fb);
extern fx_s3132 fx_s3132_mul2(fx_s3132 fa, fx_s3132 fb);
extern fx_s3132 fx_s3132_div(fx_s3132 fa, fx_s3132 fb);
extern fx_s3132 fx_s3132_div1(fx_s3132 fa, fx_s3132 fb);
extern fx_s3132 fx_s3132_div2(fx_s3132 fa, fx_s3132 fb);


int main() {
	fixed64 num1, num2;
	int choose;

	printf("1. Mul Result and Performance 2. Div Result and Performance 3. Sin Result \n");
	fflush(stdout);
	scanf("%d", &choose);

	if (choose != 3) {
		printf("Write 2 number\n");
		fflush(stdout);
		scanf("%lld", &num1);
		scanf("%lld", &num2);
	}
	else {
		printf("Write 1 number\n");
		fflush(stdout);
		scanf("%lld", &num1);
	}


	if (choose == 1) {
		printf("Mul: %lld\n", fx_s3132_mul(num1, num2));
		printf("Mul1: %lld\n", fx_s3132_mul1(num1, num2));
		printf("Mul2: %lld\n", fx_s3132_mul2(num1, num2));

		for (int i = 0; i < Max; i++) {
			fx_s3132_mul(num1, num2);
		}
		for (int i = 0; i < Max; i++) {
			fx_s3132_mul1(num1, num2);
		}
		for (int i = 0; i < Max; i++) {
			fx_s3132_mul2(num1, num2);
		}
	}
	else if (choose == 2) {
		printf("Div: %lld\n", fx_s3132_div(num1, num2));
		printf("Div1: %lld\n", fx_s3132_div1(num1, num2));
		printf("Div2: %lld\n", fx_s3132_div2(num1, num2));

		for (int i = 0; i < Max; i++) {
			fx_s3132_div(num1, num2);
		}
		for (int i = 0; i < Max; i++) {
			fx_s3132_div1(num1, num2);
		}
		for (int i = 0; i < Max; i++) {
			fx_s3132_div2(num1, num2);
		}
	}if (choose == 3) {
		printf("Sin : %ld\n", fx32_sind(num1));


	}
}
