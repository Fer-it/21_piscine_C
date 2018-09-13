#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strrev(char *str)
{
	int c_end;
	int c_start;
	int num;
	char temp;

	c_start = 0;
	c_end = 0;
	num = 0;

	while (str[num] != '\0')
	{
		num++;
	}
	num--;
	while (c_end > c_start)
	{
		
		temp = result[c_start];
		result[c_start] = result[c_end];
		result[c_end] = temp;
		c_start++;
		c_end--;
	}

	return (str);
}

int	main(void)
{	
	char *str = "Test test";
	ft_strrev(str);
	//char *str2 = ft_strrev(str);
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	return (0);
}