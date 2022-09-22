#include<stdio.h>
#include<locale.h>
#define a 63241.126
double svgod (int god)
{
	double result = a * god;
	return result;
}

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int god;
	double result;
	puts("введите число световых лет:");
	scanf("%d",&god);
	result = svgod(god);
	printf("%d световых года - это %.3lf а.е.", god, result);

}