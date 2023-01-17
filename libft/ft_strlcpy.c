/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:16:56 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 16:50:14 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (((unsigned char *)src)[i] && i < dstsize - 1)
		{
			dst[i] = ((unsigned char *)src)[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen((char *)src));
}
