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

t_list *ft_list_last(t_list *begin_list);

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
	printf("0x0\n");
	printf("%p\n", ft_list_last(list));

	printf(" -- Тест 2 --\n");
	list = ft_create_elem("str1");
	printf("str1\n");
	printf("%s\n", (char*)(ft_list_last(list)->data));

	printf(" -- Тест 2 --\n");
	list->next = ft_create_elem("str3");
	list->next->next = ft_create_elem("str3");
	printf("str3\n");
	printf("%s\n", (char*)(ft_list_last(list)->data));

	printf(" -- Тест 3 --\n");
	list = ft_create_elem("s1");
	list->next = ft_create_elem("s2");
	list->next->next = ft_create_elem("s3");
	list->next->next->next = ft_create_elem("s4");
	printf("s4\n");
	printf("%s\n", (char*)(ft_list_last(list)->data));
	return (0);
}
