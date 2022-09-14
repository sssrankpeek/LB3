#include<stdio.h>
#include<locale.h>
#define d 2.54
#define i 2.32166
void main()
{
	setlocale(LC_ALL, "RUS");
	int num, num2, dym, pulg;
	puts("введите число");
	scanf("%d%d", &num,&num2);
	printf("¬веденbl числa %d and %d\n", num, num2);
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
	puts("\nвведите значение a");
	scanf("%f", &a);
	puts("\nвведите значение b"); 
	scanf("%f", &b);
	puts  ("\n__________________");
	printf("\n|a*b | a+b | a-b |");
	puts  ("\n------------------");
	printf("\n|%g*%g | %g+%g | %g-%g |", a,b,a,b,a,b);
	puts  ("\n------------------");
	printf("\n| %g |  %g |  %g |", a * b, a + b, a - b);

		

}
