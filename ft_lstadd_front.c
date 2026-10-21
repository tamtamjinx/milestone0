
#include "libft.h"
/*Adds the node ’new’ at the beginning of the list.*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ; // Stop if either pointer is NULL
	new->next = *lst; // Make the new node point to the current first node
	*lst = new; // Update the list head to the new node
}
