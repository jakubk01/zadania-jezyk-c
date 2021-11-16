#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{

	//z1

	int i = 0, liczba, max;
	float suma = 0, srednia;

	do
	{
		printf("Podaj liczbe: \n");
		scanf_s("%d", &liczba);
		suma += liczba;

		if (i == 0) max = liczba;
		else if (max < liczba) max = liczba;
		i++;
	} while (liczba >= 0);

	srednia = suma / (i - 1);
	printf("Suma: %f \n", suma);
	printf("Max: %d \n", max);
	printf("Srednia: %f \n\n", srednia);

	//z2

	float suma_d = 0, suma_u = 0, ile_d = 0, ile_u = 0;
	int liczba1;

	for (int ii = 0; ii < 10; ii++)
	{
		printf("Podaj liczbe: \n");
		scanf_s("%d", &liczba1);

		if (liczba1 >= 0)
		{
			suma_d += liczba1;
			ile_d++;
		}
		else
		{
			suma_u += liczba1;
			ile_u++;
		}
	}
	printf("Suma liczb dodatnich wynosi: %f, ilosc liczb dodatnich: %f \n", suma_d, ile_d);
	printf("Suma liczb ujemnych wynosi: %f, ilosc liczb ujemnych: %f \n\n", suma_u, ile_u);

	//z3

	float suma1 = 0;
	int liczba2, n;

	

	printf("Podaj n: \n");
	scanf_s("%d", &n);

	if (n > 0)
	{
		for (int iii = 0; iii < n; iii++)
		{
			printf("Podaj liczbe: \n");
			scanf_s("%d", &liczba2);
			if (liczba2 % 2 == 0) suma1 += liczba2;
		}
		printf("Suma liczb parzystych: %f \n\n", suma1);
	}
	else 
	{
		printf("n musi byc liczba dodatnia \n\n");
	}

	//z4

	float suma2 = 0;
	int liczba3, n2;

	srand(time(NULL));

	printf("Podaj n: \n");
	scanf_s("%d", &n2);
	printf("Wylosowane liczby z przedzialu: (-10,45): \n\n");

	if (n2 > 0)
	{
		for (int iiii = 0; iiii < n2; iiii++)
		{
			liczba3 = rand() % 45 - 10;
			printf("%d ", liczba3);
			if (liczba3 % 2 == 0) suma2 += liczba3;
		}
		printf("Suma liczb parzystych: %f", suma2);
	}
	else
	{
		printf("n musi byc liczba dodatnia");
	}




}
