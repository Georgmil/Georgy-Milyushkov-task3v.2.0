#include <stdio.h>
#include <math.h>

int main() {

	// Task 1
	printf("Task 1:\n");

	printf("Function y=1/x\n\n");
	float a,b,h,res;
	printf("Please enter start value a:");
	scanf_s("%f", &a);
	printf("Please enter final value b:");	
	scanf_s("%f", &b);
	printf("Please enter step value h:");
	scanf_s("%f", &h);

	int c = 0;
	printf("Results:\n\n");
	while (a <= b) {
		if (a == 0) {
			c += 1;
			printf("  %d     %.2f    ****\n",c,a);
			a += h;
			continue; //если мы делим на ноль ты мы выходим из цикла и начинаем с другими данными, но мы это все равно считаем
		}
		res = 1 /a;
		c += 1;
		printf("  %d     %.2f    %.2f\n", c,a, res);
		a += h;


	}
	///  Task 3
	printf("\n");
	printf("Task 3\n");
	float f,x,yn,yn1,e,s; 
	int n;

	printf("Please enter a x value -1 < x > 1 for function f(x)=arcsin: ");
	scanf_s("%f", &x);
	printf("Please enter epsilon(small number,example 0.0001) for the accuracy of our function:");
	scanf_s("%f", &e);

	n = 0;

	yn1 = x;
	s = x;

	f = asin(x);
	do {
		yn = yn1; //значения для того чтобы в цикле значения менялись
		yn1= (yn * (pow(x, 2))) * ((pow(2.0f * n + 1, 2)) / (2 * (n + 1) * (2 * n + 3))); //коэффицент перехода
		s += yn1; //считаем сумму
		n += 1; //для переходна на следующие значение в расчете суммы
	} while ((yn-yn1) > e); 

	printf("\n");
	printf("Function f is         %.20f\n",f);
	printf("The Maclaurin sum is  %.20f\n", s);




	return 0;
}