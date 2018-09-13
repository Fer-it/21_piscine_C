#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int num_changed;
	int i;
	int y;

	i = 0;
	y = 0;
	num_changed = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0')
	{
		if (nb <= num_changed)
			break ;
		dest[i] = src[y];
		i++;
		y++;
		num_changed++;
	}
	dest[i] = '\0';
	return (dest);
}


int main(void)
{
	char str1[10] = "123";
	char str2[] = "4567";
	printf("nb =0 => %s\n", ft_strncat(str1, str2, 0));
	printf("nb = -2 => %s\n", ft_strncat(str1, str2, -2));
	printf("nb = 3 => %s\n", ft_strncat(str1, str2, 3));
	printf("nb = 30 => %s\n", ft_strncat(str1, str2, 30));
	return (0);
}