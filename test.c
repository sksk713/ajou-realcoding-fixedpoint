#include <stdio.h>
#include <math.h>
#include "fx_s3132_double.h"

extern fx_s3132 fx_s3132_fx_to_double(fx_s3132 a);
extern fx_s3132 fx_s3132_double_to_fx(fx_s3132 a);
extern fx_s3132 fx_s3132_add(fx_s3132 a, fx_s3132 b);
extern fx_s3132 fx_s3132_sub(fx_s3132 a, fx_s3132 b);
extern fx_s3132 fx_s3132_mul(fx_s3132 a, fx_s3132 b);
extern fx_s3132 fx_s3132_div(fx_s3132 a, fx_s3132 b);
extern fx_s3132 fx_s3132_sin(fx_s3132 a);
extern fx_s3132 fx_s3132_sqrt(fx_s3132 a);
extern fx_s3132 fx_s3132_power(fx_s3132 a, fx_s3132 b);
extern fx_s3132 fx_s3132_log(fx_s3132 a);
extern fx_s3132 fx_s3132_ln(fx_s3132 a);
extern fx_s3132 fx_s3132_pi();
extern fx_s3132 fx_s3132_pi_reverse();

int main() {
	int choose;
	long long num1, num2;
	double dnum1;
	int a;

	while (1) {
		printf("\nChoose the function\n");
		printf("1. Operation  2. Function  3. Conversion  4. Constant  5. End\n");
		fflush(stdout);
		scanf("%d", &choose);

		if (choose == 1) {
			printf("Input 2 fixed point number.\n");
			fflush(stdout);
			scanf("%lld", &num1);
			scanf("%lld", &num2);

			printf("Choose the operation.\n");
			printf("1. Add  2. Sub  3. Mul  4. Div\n");
			fflush(stdout);
			scanf("%d", &a);

			if (a == 1) {
				printf("Result: %lld\n", fx_s3132_add(num1, num2));
			}
			else if (a == 2) {
				printf("Result: %lld\n", fx_s3132_sub(num1, num2));
			}
			else if (a == 3) {
				printf("Result: %lld\n", fx_s3132_mul(num1, num2));
			}
			else if (a == 4) {
				printf("Result: %lld\n", fx_s3132_div(num1, num2));
			}
		}
		else if (choose == 2) {
			printf("Choose the function.\n");
			printf("1. Sine  2. Sqrt  3. Power  4. log10  5. ln\n");
			fflush(stdout);
			scanf("%d", &a);

			if (a == 1) {
				printf("Input 1 fixed point number.\n");
				fflush(stdout);
				scanf("%lld", &num1);

				printf("Result: %lld\n", fx_s3132_sin(num1));
			}
			else if (a == 2) {
				printf("Input 1 fixed point number.\n");
				fflush(stdout);
				scanf("%lld", &num1);

				printf("Result: %lld\n", fx_s3132_sqrt(num1));
			}
			else if (a == 3) {
				printf("Input 2 fixed point number.\n");
				fflush(stdout);
				scanf("%lld", &num1);
				scanf("%lld", &num2);

				printf("Result: %lld\n", fx_s3132_power(num1, num2));
			}
			else if (a == 4) {
				printf("Input 1 fixed point number.\n");
				fflush(stdout);
				scanf("%lld", &num1);

				printf("Result: %lld\n", fx_s3132_log(num1));
			}
			else if (a == 5) {
				printf("Input 1 fixed point number.\n");
				fflush(stdout);
				scanf("%lld", &num1);

				printf("Result: %lld\n", fx_s3132_ln(num1));
			}
		}
		else if (choose == 3) {
			printf("Choose the conversion.\n");
			printf("1. fx_to_double  2. double_to_fx\n");
			fflush(stdout);
			scanf("%d", &a);

			if (a == 1) {
				printf("Input 1 fixed point number.\n");
				fflush(stdout);
				scanf("%lld", &num1);
				printf("Result: %lf\n", fx_s3132_fx_to_double(num1));
			}
			else if (a == 2) {
				printf("Input 1 double number.\n");
				fflush(stdout);
				scanf("%lf", &dnum1);
				printf("Result: %lld\n", fx_s3132_double_to_fx(dnum1));
			}
		}
		else if (choose == 4) {
			printf("Choose the constant.\n");
			printf("1. PI  2. 1/PI\n");
			fflush(stdout);
			scanf("%d", &a);

			if (a == 1) {
				printf("Result: %lld\n", fx_s3132_pi());
			}
			else if (a == 2) {
				printf("Result: %lld\n", fx_s3132_pi_reverse());
			}
		}
		else if (choose == 5) {
			break;
		}
	}

	printf("Thank You\n");
	return 0;
}
