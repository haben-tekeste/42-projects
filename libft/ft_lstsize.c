/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habentekeste <habentekeste@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 05:13:37 by habentekeste       #+#    #+#             */
/*   Updated: 2023/01/13 05:13:38 by habentekeste      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

int	ft_lstsize(t_list *lst)
{
	struct s_list	*lst_temp;
	int	count;

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
