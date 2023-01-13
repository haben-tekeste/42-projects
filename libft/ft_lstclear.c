/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habentekeste <habentekeste@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 05:14:31 by habentekeste       #+#    #+#             */
/*   Updated: 2023/01/13 05:14:32 by habentekeste      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	struct s_list *tmp;

	if(!lst)
		return;
	while (*lst)
	{
		tmp = (*lst) -> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
