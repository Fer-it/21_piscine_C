#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list	*ft_create_elem(void *data)
{
	t_list *next;

	next = malloc(sizeof(t_list));
	*next = (t_list) {
			.next = NULL,
			.data = data
	};
	return (next);
}

int ft_list_size(t_list *begin_list);

void print_a_list(t_list* list)
{
	while ( list != 0)
	{
		printf("%s ", (char*)list->data);
		list = list->next;
	}
	printf("\n");
}

int main(void)
{
	t_list* list = 0;
	printf(" -- Тест 1 --\n");
	printf("0\n");
	printf("%d\n", ft_list_size(list));

	printf(" -- Тест 2 --\n");
	printf("1\n");
	list = ft_create_elem("aa");
	printf("%d\n", ft_list_size(list));

	printf(" -- Тест 3 --\n");
	list->next = ft_create_elem("aa");
	list->next->next = ft_create_elem("aa");
	printf("3\n");
	printf("%d\n", ft_list_size(list));

	printf(" -- Тест 4 --\n");
	list = 0;
	printf("0\n");
	printf("%d\n", ft_list_size(list));
	return (0);
}
