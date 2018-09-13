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

void ft_list_clear(t_list **begin_list);

void print_a_list(t_list* list)
{
	while ( list != 0)
	{
		printf("%s ", (char*)list->data);
		list = list->next;
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	t_list *element1;
	t_list *element2;
	t_list *element3;

	element1 = ft_create_elem("Hello");
	ft_list_clear(&element1);
	printf("%p\n", element1);
	return (0);
}
