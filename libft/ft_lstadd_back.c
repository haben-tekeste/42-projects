/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habentekeste <habentekeste@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 05:14:07 by habentekeste       #+#    #+#             */
/*   Updated: 2023/01/13 05:16:52 by habentekeste      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	struct s_list	*tmp;

	tmp = ft_lstlast(*lst);
	if(!new)
		return;
	if (!*lst)
	{
		*lst = new;
		return;
	}
	tmp -> next = new;
}
