/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habentekeste <habentekeste@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 05:13:22 by habentekeste       #+#    #+#             */
/*   Updated: 2023/01/13 05:40:04 by habentekeste      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return;
	}
	new -> next = *lst;
	*lst = new;
}
