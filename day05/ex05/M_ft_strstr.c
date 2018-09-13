#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
    write(1,&c,1);
}

char *ft_strstr(char *str, char *to_find)
{
	int size;
	int i;
	int j;

	size = 0;
	i = 0;
	j = 0;
	while (to_find[size] != '\0')
		size++;
	if (!size)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (j == size - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int main()
{
	 char largestring[] = "iigghgfhfjfjddf";
	 char smallstring[] = "fhf";

	 printf("smallstring: %s\n", largestring);
     printf("original: %s\n", strstr(largestring, smallstring));
	 printf("sousad parody: %s\n", ft_strstr(largestring, smallstring));
     return 0;
 }