
#include "libft.h"
/*Takes a node as parameter and frees its content
using the function ’del’. Free the node itself but
does NOT free the next node.*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ; // Stop if the node or delete function is NULL
	del(lst->content); // Free the node's content using the provided function
	free(lst); // Free the node itself
}
