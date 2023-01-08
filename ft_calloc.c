/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:36:41 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 19:25:47 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cpy;

	cpy = malloc(size * count);
	if (!cpy || size >= SIZE_MAX || count >= SIZE_MAX)
		return (NULL);
	ft_memset(cpy, 0, count * size);
	return (cpy);
}
