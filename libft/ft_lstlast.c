/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habentekeste <habentekeste@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 05:13:49 by habentekeste       #+#    #+#             */
/*   Updated: 2023/01/13 05:13:50 by habentekeste      ###   ########.fr       */
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
