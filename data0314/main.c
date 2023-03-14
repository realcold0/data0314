#include <stdio.h>
double factorial_iter(int n)
{
	double i, result = 1;
	for (i = 1; i <= n; i++)
	{
		result = result * i;
	}

	return(result);

}
double factorial_rec(int n)
{
	if (n <= 1) return(1);
	else return (n * factorial_rec(n - 1));
}

int main()
{
	int n = 20;
	double result_iter = factorial_iter(n);
	double result_rec = factorial_rec(n);
	printf("馆汗利 规过 : %.f", result_iter);
	printf("鉴券利 规过 : %.f", result_rec);
	return 0;
}

