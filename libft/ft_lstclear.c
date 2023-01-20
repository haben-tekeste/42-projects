/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:40:17 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/20 15:24:18 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	struct s_list	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
