/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:36:41 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 18:05:40 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cpy;
	size_t	len;

	len = count * size;
	if (len > 2147483647 || (count > 2147483647) || (size > 2147483647))
		return (NULL);
	cpy = malloc(count * size);
	if (!cpy)
		return (NULL);
	else
	{
		ft_memset(cpy, 0, (count * size));
		return (cpy);
	}
}
