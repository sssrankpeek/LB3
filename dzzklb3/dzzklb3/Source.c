#include<stdio.h>
#include<locale.h>
#define a 63241.126
void main()
{
	setlocale(LC_ALL, "RUS");
	int god;
	double result;
	puts("������� ����� �������� ���:");
	scanf("%d",&god);
	result = a * god;
	printf("%d �������� ���� - ��� %.3lf �.�.", god, result);

}