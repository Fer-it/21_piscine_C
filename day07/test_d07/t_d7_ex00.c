#include <stdio.h>

char	*ft_strdup(char *src);

int main (void)
{
	printf("==== ex00 ====");
	char str1[] = "Hello";
	char *str2 = ft_strdup(str1);
	printf("\nОжидаю => %s ", str1);
	*str1 = 'Y';
	printf("\nОтвет => %s \n", str2);
	printf("\n");
	return (0);
}