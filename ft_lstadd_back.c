#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;
	t_list	*last;

	temp = (t_list *) malloc(sizeof(t_list));
	last = ft_lstlast((t_list *) lst);
	temp -> content = new;
	temp -> next = NULL;
	last -> next = temp;
}
