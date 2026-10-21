
#include "libft.h"
//Returns the last node of the list.

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL); // An empty list has no last node
	while (lst->next)
		lst = lst->next; // Move forward until the last node
	return (lst); // Return the last node
}
