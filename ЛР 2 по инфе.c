#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
int recurivly(double x, int n);
double task1();
double task2();
double task3();
double task4();
int task5_a();
int task5_b();

int main() {
	setlocale(LC_CTYPE, "rus");
	task1();
	task2();
	task3();
	task4();
	task5_a();
	task5_b();
	return 0;
}

int recurivly(double x, int n) {
	if (n == -1)
		return 1.0 / (x + 1);
	else
		return -recurivly(x, n - 1) * (x + 1);
	return 0;
}


double task1()
{
	int n, k;
	double xn, xk, dx, en, sum1, sum2;
	const double eps1 = 0.1;
	const double eps2 = 0.000001;
	printf("xn = ");
	scanf("%lf", &xn);
	printf("xk  = ");
	scanf("%lf", &xk);
	printf("dx = ");
	scanf("%lf", &dx);
	printf("x | eps1 | f1(x) | eps | f2(x) | \n");
	for (double x = xn; x < xk; x += dx) {
		n = 1;
		sum1 = 0;
		en = x;
		while (abs(en) > eps1) {
			sum1 += en;
			en *= recurivly(x, n);
			n++;
		}
		k = 1;
		sum2 = 0;
		en = x;
		while (abs(en) > eps2) {
			sum2 += en;
			en *= recurivly(x, n);
			k++;
		}
		printf("%lf | %lf | %lf | %lf | &lf | \n", x, eps1, sum1, eps2, sum2);
	}

	return 0;
}

double task2()
{
	const double eps = 0.000001;
	double a;
	printf("Введите а");
	scanf("%lf", &a);
	double x0 = a / 3;
	double xk = (2. / 3) * (x0 + (a / (2 * pow(x0, 2))));
	double sum = x0 + xk;
	while (abs(x0 - xk) > eps)
	{
		x0 = xk;
		xk = 2. * (x0 + a / (2 * x0 * x0)) / 3;
	}
	printf("%lf", xk);
	return 0;
}

double task3() {
	int n;
	double x;
	puts("Введите n");
	scanf("%d", &n);
	double min = 1 * sin(n + 1 / (double)n); 
	for (int k = 2; k <= n; k++)
	{
		x = pow(k, 3) * sin(n + k / n);
		if (x < min) {
			min = x;
		}
	}
	printf("Наименьшее среди чисел: %lf", x);
	return 0;
}

double task4()
{
	double n, sum, a = 1, b = 1, a1, b1;
	printf("Введите n: ");
	scanf("%lf", &n);
	sum = a * b;
	for (int i = 2; i < n; i++) {
		a1 = a;
		b1 = b;
		a = (1.0 * (sqrt(b1) + 0.5 * a1)) / 2.0;
		b = 2 * pow(a1, 2) + b1;
		sum += a * b;
	}
	printf("%lf", sum);
	return 0;
}

int task5_a()
{
	double eps = 0.000001;
	double x = 1.0;
	double lim = 1.0;

	while (true) {
		double func = sin(x) / x;
		double dif = fabs(func - lim);

		printf("x = %lf", x);
		printf("(sin x)/x = %lf", func);

		if (dif < eps) {
			printf("Найденное значение близко к первому пределу с погрешностью %lf", eps);
			break;
		}

		x /= 2.0;
	}

	return 0;

	return 0;
}

int task5_b()
{
	double eps = 0.000001;
	double n = 1.0;
	double lim = 1.0;

	while (true) {
		double func = pow((1 + n), n);
		double dif = fabs(func - lim);

		printf("x = %lf", n);
		printf("(1+ 1/n)^n = %lf",func);

		if (dif < eps) {
			printf("Найденное значение близко к первому пределу с погрешностью %lf",eps);
			break;
		}

		n /= 2.0;
	}

	return 0;
}