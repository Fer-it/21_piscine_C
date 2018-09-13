#include <unistd.h>
#include <stdio.h>
#include <libc.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int len_src;
	int len_dest;
	int len_to_cat;

	len_src = 0;
	len_dest = 0;
	while (*dest != '\0')
	{
		len_dest++;
		dest++;
	}
	while (src[len_src] != '\0')
		len_src++;
	len_to_cat = size - len_dest - 1;
	while (*src != '\0' && len_to_cat > 0)
	{
		*dest = *src;
		dest++;
		src++;
		len_to_cat--;
	}
	*dest = '\0';
	if (size < len_dest)
		len_dest = size;
	return (len_dest + len_src);
}

int main(void)
{
	char dest[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	char src[] = "asdf";
	printf("%i-%s\n", ft_strlcat(dest, src, 16),dest);
	printf("%i-%s\n", ft_strlcat(dest, src, 6),dest);
	printf("%i-%s\n", ft_strlcat(dest, src, 4),dest);
	printf("%i-%s\n", ft_strlcat(dest, "", 16),dest);
	printf("%i-%s\n", ft_strlcat(dest, src, 0),dest);

	printf("========\n");

	char dest2[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	char src2[] = "asdf";
	printf("%i-%s\n", strlcat(dest2, src2, 16),dest2);
	printf("%i-%s\n", strlcat(dest2, src2, 6),dest2);
	printf("%i-%s\n", strlcat(dest2, src2, 4),dest2);
	printf("%i-%s\n", strlcat(dest2, "", 16),dest2);
	printf("%i-%s\n", strlcat(dest2, src2, 0),dest2);
	return (0);
}