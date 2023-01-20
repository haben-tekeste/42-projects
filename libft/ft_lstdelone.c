/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:42:30 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/20 15:21:15 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst-> content);
	free(lst);
}
