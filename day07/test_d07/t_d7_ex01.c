#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int *array1;
	array1 = ft_range(4, 8);
	printf("==== ex01 ====");
	printf("\nОжидаю => 4 5 6 7 Ответ => %i %i %i %i", array1[0], array1[1], array1[2], array1[3]);
	array1 = ft_range(4, 4);
	printf("\nОжидаю => 4 ");
	printf("Ответ => %i", array1[0]);
	printf("\nОжидаю => 0x0 Ответ => %p", ft_range(3, 1));
	printf("\n");
	printf("\n");
	return(0);
}