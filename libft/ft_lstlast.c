/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:43:36 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 16:43:39 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	struct s_list	*lst_tmp;

	if (!lst)
		return (NULL);
	lst_tmp = lst;
	while (lst_tmp -> next != NULL)
	{
		lst_tmp = lst_tmp -> next;
	}
	return (lst_tmp);
}
