#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list *ft_list_push_params(int ac, char **av);

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
	t_list *start_element;

	start_element = ft_list_push_params(argc, argv);
	print_a_list(start_element);
	return (0);
}
