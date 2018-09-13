#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
    write(1,&c,1);
}

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        *(dest + i) = '\0';
        i++;
    }
    return (dest);
}

 int main()
 {
	 char src[] = "12";
	 char ds[] = "sddfg";
	
	 //printf("%s\n", ds);
     //printf("%s\n", strncpy(ds, src, 2));
	 printf("%s\n", ft_strncpy(ds, src, 2));
	 //printf("%s\n", ds);
     return 0;
 }
