#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int *array2;
	int num = ft_ultimate_range(&array2, 1, 4);
	printf("==== ex02 ====");
	printf("\nОжидаю => 1 2 3 Ответ => %i %i %i", array2[0], array2[1], array2[2]);
	printf("\nОжидаю n = 3 Ответ n = %i", num);
	int *array3;
	num = ft_ultimate_range(&array3, 3, 1);
	printf("\nОжидаю n = 0 Ответ n = %i", num);
	printf("\nОжидаю => 0x0 Ответ => %p", array3);
	int *array4;
	num = ft_ultimate_range(&array4, 3, 3);
	printf("\nОжидаю n = 1 Ответ n = %i", num);
	printf("\nОжидаю => 3 Ответ => %i", array4[0]);
	printf("\n");
	printf("\n");
}