#include <stdio.h>
#include <locale.h>

void main()


{
	setlocale(LC_CTYPE, "RUS");
	int d;
	float S, R, V;
	puts("������� ������� ����");
	scanf("%d", &d);
	R = d / 2;
	S = 4 * 3.14 * (R * R);
	V = (4 / 3) * 3.14 * (R * R * R);
	printf("%s%d%s%10.2f%s%s%10.2f", "�������� ������� ", d, "������� ����������� ���� ����� ", S, "����� ���� ����� ", V);





	system("pause");


}
