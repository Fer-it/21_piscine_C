#include <stdio.h>
#include <unistd.h>

char **ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int main(void)
{
	printf("==== ex04 ====");
	char *argv = "123   23	34 \n dfs";
	char **result1 = ft_split_whitespaces(argv);
	printf("\nОжидаю => \n123\n23\n34\ndfs\n");
	printf("Результат => \n");
	while (*result1 != 0)
	{
		ft_putstr(*result1);
		ft_putchar('\n');
		result1++;
	}

	return (0);
}
