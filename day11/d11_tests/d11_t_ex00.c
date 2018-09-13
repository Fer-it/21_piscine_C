#include <stdio.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list	*ft_create_elem(void *data);

int main(int argc, char **argv)
{
	argc = 2;
	t_list *temp = ft_create_elem(argv[1]);
	printf("Ответ =>  %s\n", temp->data);
	return (0);
}
