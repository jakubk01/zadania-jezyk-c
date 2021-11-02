#include <stdio.h>

int main()

{
	//z5
	int wybor;
	float x1, x2;

	printf("wpisze liczbe a i liczbe b\n");
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