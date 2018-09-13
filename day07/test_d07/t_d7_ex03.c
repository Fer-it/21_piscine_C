#include <stdio.h>

char *ft_concat_params(int argc, char **argv);

int main(void)
{
	printf("==== ex03 ====");
	char *argv[3];
	argv[0] = "1a";
	argv[1] = "2a";
	argv[2] = "3s";
	char *str = ft_concat_params(3, argv);
	printf("\nft_concat_params(3, argv) Ожидаю \n2a\n3s ");
	printf("\nОтвет \n%s", str);
	char *str2 = ft_concat_params(0, argv);
	printf("\nt_concat_params(0, argv) Ожидаю => ");
	printf("\nОтвет => %s", str2);
	char *str3 = ft_concat_params(-23, argv);
	printf("\nft_concat_params(-23, argv) Ожидаю => ");
	printf("\nОтвет => %s", str3);
	char *str4 = ft_concat_params(2, argv);
	printf("\nft_concat_params(1, argv) Ожидаю => 2a");
	printf("\nОтвет => %s", str4);
	printf("\n");
	printf("\n");
	return (0);
}