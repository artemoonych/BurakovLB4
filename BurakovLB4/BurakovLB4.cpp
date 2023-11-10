#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Rus");

	int i, j, c = 0;

	printf_s("Введите длину массива:  \n");
	scanf_s("%d", &j);

	int arr[100];


	for (i = 0; i < j; ++i)
	{

		printf_s("Введите элемент массива:\n ");
		if (scanf_s("\n%d", &arr[i]) != 1) {
			printf_s("Неверный ввод!\n");
			return 0;
		}
		if (arr[i] != 0)
			c++;

	};
	printf_s("Кол-во ненулевых элементов:%d", c);
	return 0;


}