/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:31:06 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 13:49:43 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	j;

	i = 0;
	len = ft_strlen(dst);
	j = len;
	if (dstsize == 0)
		return (len);
	while (i < dstsize - 1 && src[i])
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ft_strlen(dst));
}
