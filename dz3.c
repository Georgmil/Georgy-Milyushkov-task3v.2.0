#include <stdio.h>
#include <math.h>

int main() {

	// Task 1
	printf("Task 1:\n");

	printf("Function y=1/x\n\n");
	float a, b, h, res, eps;
	printf("Please enter start value a:");
	scanf_s("%f", &a);
	printf("Please enter final value b:");
	scanf_s("%f", &b);
	printf("Please enter step value h:");
	scanf_s("%f", &h);

	int c = 0;
	eps = 0.00001;
	printf("Results:\n\n");
	while (a <= b + (h - eps)) {
		if (a<(h - eps) && a>-(h - eps)) {
			c += 1;
			printf("  %d     %.2f    ****\n", c, a);
			a += h;
			continue; //если мы делим на ноль ты мы выходим из цикла и начинаем с другими данными, но мы это все равно считаем
		}
		res = 1 / a;
		c += 1;
		printf("  %d     %.2f    %.2f\n", c, a, res);
		a += h;


	}




	return 0;
}