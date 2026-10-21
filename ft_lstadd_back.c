
#include "libft.h"
//Adds the node ’new’ at the end of the list.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ; // Stop if either pointer is NULL
	last = ft_lstlast(*lst); // Find the current last node
	if (!last)
	{
		ft_lstadd_front(lst, new); // If empty, new becomes the first node
		return ;
	}
	last->next = new; // Attach the new node after the last node
}
