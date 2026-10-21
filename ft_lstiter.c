
#include "libft.h"
/*Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ; // Stop if the list or function is NULL
	while (lst)
	{
		f(lst->content); // Apply f to the current node's content
		lst = lst->next; // Move to the next node
	}
}
