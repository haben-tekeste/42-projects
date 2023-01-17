/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:44:00 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 16:44:03 by htekeste         ###   ########.fr       */
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
