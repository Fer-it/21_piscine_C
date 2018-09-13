#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

int main()
{
	 char largestring[] = "02345778";
	 char smallstring[] = "123456780";

     printf("original: %i\n", strcmp(largestring, smallstring));
	 printf("so sad parody: %i\n", ft_strcmp(largestring, smallstring));
     return 0;
 }