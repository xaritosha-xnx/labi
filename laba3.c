#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL, "rus");
	long long int n=0, a=0, b=0, c=0, d=0, g=0, h=0, e=0, f = 0;
	printf("������� �����\n" );
	scanf_s("%d", &n);
	while (n >= 50)
	{
		n = n - 50;
		a = a + 1;
	}
	while (n >= 20)
	{
		n = n - 20;
		b = b + 1;
	}
	while (n >= 15)
	{
		n = n - 15;
		c = c + 1;
	}
	while (n >= 10)
	{
		n = n - 10;
		d = d + 1;
	}
	while (n >= 5)
	{
		n = n - 5;
		g = g + 1;
	}
	while (n >= 3)
	{
		n = n - 3;
		h = h + 1;
	}
	while (n >= 2)
	{
		n = n - 2;
		e = e + 1;
	}
	while (n >= 1)
	{
		n = n - 1;
		f = f + 1;
	}
	printf("������ �� 50 %d\n������ �� 20 %d\n������ �� 15 %d\n������ �� 10 %d\n������ �� 5 %d\n������ �� 3 %d\n������ �� 2 %d\n������ �� 1 %d\n", a ,b ,c ,d, g, h, e, f);
	return 0;

}