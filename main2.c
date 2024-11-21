#include "libft.h"
#include <stdio.h>

void	add(void *c)
{
	printf("%d\n", *(int *)c);
}

int main()
{
	t_list	*head;
	int i = 0;

	while(i < 10)
	{
		int *tab = malloc(4);
		*tab = i;
		ft_lstadd_back(&head, ft_lstnew(tab));
		i++;
	}
	void (*f)(void *);
	f = add;
	while(head)
	{
		f(head -> content);
		head = head -> next;
	}
}
