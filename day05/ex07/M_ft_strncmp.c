#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
    write(1,&c,1);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 != '\0' && *s2 != '\0') && n > 1)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	if (*s1 == '\0' && *s2 != '\0')
		return (-*s2);
	if (*s1 != '\0' && *s2 == '\0')
		return (*s1);
	return (0);
}

int main()
{
	 char *str1 = "1r341";
	 char *str2 = "15243";

     printf("original: %i\n", strncmp(str1, str2, 4));
	 printf("so sad parody: %i\n", ft_strncmp(str1, str2, 4));
     return 0;
 }
