
#include "libft.h"
//Counts the number of nodes in the list
unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	if (!lst)
		return (0); // An empty list has zero nodes
	i = 0;
	while (lst)
	{
		i++; // Count the current node
		lst = lst->next; // Move to the next node
	}
	return (i); // Return the total number of nodes
}
