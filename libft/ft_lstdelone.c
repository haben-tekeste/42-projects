/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habentekeste <habentekeste@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 05:14:20 by habentekest       #+#    #+#             */
/*   Updated: 2023/01/13 08:17:14 by habentekest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (!lst || !del)
		return;
	del( lst-> content);
	free(lst);
}
