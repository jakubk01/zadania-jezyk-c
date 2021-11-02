#include <stdio.h>

int main()

{
	//z1
	int a = 122995;
	printf("nr albumu studenta: %d \n\n", a);

	//z2
	int b;
	printf("\nPodaj liczbe calkowita: \n");
	scanf_s("%d", &b);
	if (b % 2 == 0) {
		printf("Liczba jest parzysta\n");
	}
	else
	{
		printf("Liczba jest nieparzysta\n");
	}

	//z3
	float c, d;
	printf("\nPodaj dwie liczby: \n");
	scanf_s("%f", &c);
	scanf_s("%f", &d);
	if (c > d) {
		printf("Liczba pierwsza jest wieksza\n");
	}
	else if (c < d) {
		printf("Liczba druga jest wieksza\n");
	}
	else if (c == d) {
		printf("Liczby sa rowne\n");
	}

	//z4
	float a1, a2, a3, a4;
	printf("\nPodaj cztery liczby: \n");
	scanf_s("%f", &a1);
	scanf_s("%f", &a2);
	scanf_s("%f", &a3);
	scanf_s("%f", &a4);
	float wynik = a1 + a2 + a3 + a4;
	float srednia = wynik / 4;
	printf("\nWynik: %f", srednia);

	
	//z5
	int wybor;
	float x1, x2;

	printf("\n\nPodaj liczbe a i liczbe b\n");
	scanf_s("%f", &x1);
	scanf_s("%f", &x2);

	printf("Wybierz opcje: \n");
	printf("\n1.Suma \n2.Roznica \n3.Iloczyn \n4.Iloraz\n");
	scanf_s("%d", &wybor);

	switch (wybor)
	{
	case 1:
		printf("Suma %f + %f = %f", x1, x2, (x1 + x2));
		break;
	case 2:
		printf("Roznica %f - %f = %f", x1, x2, (x1 - x2));
		break;
	case 3:
		printf("Iloczyn %f * %f = %f", x1, x2, (x1 * x2));
		break;
	case 4:
		printf("Iloraz %f / %f = %f", x1, x2, (x1 / x2));
		break;

	}

	return 0;
}