/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:36:41 by htekeste          #+#    #+#             */
/*   Updated: 2022/12/28 21:03:12 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cpy;

	cpy = malloc(count * size);
	if (!cpy)
		return (NULL);
	ft_bzero(cpy, size * count);
	return (cpy);
}
