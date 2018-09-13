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

void	ft_list_push_back(t_list **begin_list, void *data);

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
	t_list *list = 0;
	printf(" -- Тест 1 --\n");
	printf("Hello\n");
	ft_list_push_back(&list, "Hello");
	print_a_list(list);
	printf("-- Тест 2 --\n");
	printf("Hello Man zxcv\n");
	ft_list_push_back(&list, "Man");
	ft_list_push_back(&list, "zxcv");
	print_a_list(list);
	list = 0;
	printf("-- Тест 3 --\n");
	printf("Youu 123r\n");
	ft_list_push_back(&list, "Youu");
	ft_list_push_back(&list, "123r");
	print_a_list(list);
	return (0);
}
