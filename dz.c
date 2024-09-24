#include <stdio.h>
#include <locale.h>

void main()


{
	setlocale(LC_CTYPE, "RUS");
	float d, S, R, V;
	puts("Введите диаметр шара");
	scanf("%e", &d);
	R = d / 2;
	S = 4 * 3.14 * (R * R);
	V = (4 / 3) * 3.14 * (R * R * R);
	printf("%s%5.0f\n%s%10.2f\n%s%10.2f\n", "Введённый диаметр ", d, "Площадь поверхности шара равна ", S, "Объём шара равен ", V);





	system("pause");


}

