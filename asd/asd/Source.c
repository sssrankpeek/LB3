#include<stdio.h>
#include<locale.h>
#define d 2.54
#define i 2.32166
void main()
{
	setlocale(LC_ALL, "RUS");
	int num, num2, dym, pulg;
	puts("������� �����");
	scanf("%d%d", &num, &num2);
	printf("������� ����� %d and %d\n", num, num2);
	printf("cymma %d\n raznost %d\n proizvedenie %d\n ostatok %d na %d raven %d\n", num2 + num, num2 - num, num2 * num, num2, num, num2 % num);

	double result, ressult;
	puts("������� ���������� ������");
	scanf("%d", &dym);
	puts("������� ���������� �������");
	scanf("%d", &pulg);
	result = d * dym;
	ressult = i * pulg;
	printf("%d ������ � ��� %.2lf ��, %d ������� - ��� %.2lf ��", dym, result, pulg, ressult);

	float a, b;
	puts("������� ����� a");
	scanf("%f", &a);
	puts("������� ����� b");
	scanf("%f", &b);
	puts("\n _________________");
	printf("\n| a*b | a+b | a-b |");
	puts("\n _________________");
	printf("\n| %g*%g | %g+%g | %g-%g |", a, b, a, b, a, b);
	puts("\n _________________");
	printf("\n|%5g|%5g|%5g|", a * b, a + b, a - b);



}