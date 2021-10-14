#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	ft_lstlast((t_list *)lst) -> next = new;
	new -> next = NULL;
}
