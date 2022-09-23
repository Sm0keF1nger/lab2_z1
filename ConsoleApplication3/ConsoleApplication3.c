#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_CTYPE,"ukr");
	int a, b, res1, res2;
	double res3;

	printf("a = ");
	scanf_s("%d", &a);

	printf("b = ");
	scanf_s("%d", &b);

	res1 = fmod(a, b);
	res2 = b - a;
	res3 = pow(a,2)+pow(b,2);

	printf("Остачча від a / b = %d\n", res1);
	printf("b - a = %d\n", res2);
	printf("a^2 + b^2 = %.2lf\n", res3);
}
