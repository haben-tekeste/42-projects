/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:44:56 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 16:45:12 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

int	ft_lstsize(t_list *lst)
{
	struct s_list	*lst_temp;
	int				count;

	count = 0;
	if (!lst)
		return (count);
	lst_temp = lst;
	while (lst_temp)
	{
		lst_temp = lst_temp -> next;
		count++;
	}
	return (count);
}
