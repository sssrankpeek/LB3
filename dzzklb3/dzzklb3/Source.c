#include<stdio.h>
#include<locale.h>
#define a 63241.126
void main()
{
	setlocale(LC_ALL, "RUS");
	int god;
	double result;
	puts("введите число световых лет:");
	scanf("%d",&god);
	result = a * god;
	printf("%d световых года - это %.3lf а.е.", god, result);

}