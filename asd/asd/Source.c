#include<stdio.h>
#include<locale.h>
#define d 2.54
#define i 2.32166
void main()
{
	setlocale(LC_ALL, "RUS");
	int num, num2, dym, pulg;
	puts("введите число");
	scanf("%d%d", &num, &num2);
	printf("введены числа %d and %d\n", num, num2);
	printf("cymma %d\n raznost %d\n proizvedenie %d\n ostatok %d na %d raven %d\n", num2 + num, num2 - num, num2 * num, num2, num, num2 % num);

	double result, ressult;
	puts("введите количество дюймов");
	scanf("%d", &dym);
	puts("введите количество пульгад");
	scanf("%d", &pulg);
	result = d * dym;
	ressult = i * pulg;
	printf("%d дюймов Ц это %.2lf см, %d пульгад - это %.2lf см", dym, result, pulg, ressult);

	float a, b;
	puts("введите число a");
	scanf("%f", &a);
	puts("введите число b");
	scanf("%f", &b);
	puts("\n _________________");
	printf("\n| a*b | a+b | a-b |");
	puts("\n _________________");
	printf("\n| %g*%g | %g+%g | %g-%g |", a, b, a, b, a, b);
	puts("\n _________________");
	printf("\n|%5g|%5g|%5g|", a * b, a + b, a - b);



}