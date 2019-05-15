#include "Header.h"
int main()
{
	setlocale(LC_ALL, "Rus");
	double eps;
	int n, k;
	do
	{
		system("cls");
		printf("Введите номер задания:\n1 - Задание 1\n2 - Задание 2\n3 - Задание 3\n4 - Задание 4\n5 - Задание 5\n6 - Выход\n\n");
		switch (getch())
		{
		case '1':
			system("cls");
			printf("Задание 1:\n");
			printf("n = "); scanf("%i", &n);
			printf("Сумма = %f\n", summdw(n));
			getch();
			break;
		case '2':
			system("cls");
			printf("Задание 2:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("Сумма = %f\n", summ2dw(eps));
			getch();
			break;
		case '3':
			system("cls");
			printf("Задание 3:\n");
			printf("n = "); scanf("%i", &n);
			printf("k = "); scanf("%i", &k);
			printdw(n, k);
			getch();
			break;
		case '4':
			system("cls");
			printf("Задание 4:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("i = %d\n", findFirstElementdw(eps));
			getch();
			break;
		case '5':
			system("cls");
			printf("Задание 5:\n");
			printf("eps = "); scanf("%lf", &eps);
			printf("i = %d\n", findFirstNegativeElementdw(eps));
			getch();
			break;
		case '6':
			return 0;
			break;
		default:
			system("cls");
			printf("В следующий раз будь внимательнее...\n");
			getch();
			break;
		}
	} while(1);
}


double a(int i)
{
	return pow(-1, i) * (1 + 3 * i) / pow(3, i);
}