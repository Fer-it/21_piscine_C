#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

int main(void)
{
	char str1[20] = "\nsdsd\t";
	char str2[] = "sdfsg";
	printf("s = \\nsdf\\t return = %i\n", ft_str_is_printable(str1));
	printf("s = sdfsg return = %i\n", ft_str_is_printable(str2));
	return (0);
}