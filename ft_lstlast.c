#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	//t_list	*lst_elem;
	while (lst)
		lst = lst -> next;
	return (lst);
}
