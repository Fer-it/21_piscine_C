#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int i = 0;
	int y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y]!= '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char str1[20] = "123";
	char str2[] = "4567";
	ft_strcat(str1, str2);
	printf("%s\n", str1);
	return (0);
}