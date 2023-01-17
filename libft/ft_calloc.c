/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:36:41 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 17:39:45 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cpy;

	if (size != 0 && count >= (SIZE_MAX / size))
	{
		cpy = malloc(1);
		cpy = 0;
		return ((void *) cpy);
	}
	cpy = malloc(size * count);
	if (!cpy)
		return (NULL);
	ft_bzero(cpy, count * size);
	return ((void *)cpy);
}
