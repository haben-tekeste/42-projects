/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habentekeste <habentekeste@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 05:15:14 by habentekeste       #+#    #+#             */
/*   Updated: 2023/01/13 05:15:15 by habentekeste      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del)(void *))
{
	struct s_list	*tmp;

	if (!lst || f || del)
		return (NULL);
	tmp = (struct s_list *) malloc(sizeof(struct s_list *));
	while (lst)
	{
		tmp = f(lst -> content);
		del(lst -> content);
		lst = lst -> next;
	}
	free(lst);
	return (tmp);
}
