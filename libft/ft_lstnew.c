/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habentekeste <habentekeste@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 04:58:49 by habentekeste       #+#    #+#             */
/*   Updated: 2023/01/13 05:10:17 by habentekeste      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*head;

	head = (struct s_list *) malloc(sizeof(struct s_list));
	if (!head)
		return (NULL);
	head -> content = content;
	head -> next = NULL;
	return (head);
}