/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:31:06 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 16:50:08 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	char	*str2;
	char	*str1;
	size_t	diff;
	size_t	dstlen;

	diff = dstsize;
	str1 = dst;
	str2 = (char *)src;
	while (diff-- && *str1)
		str1++;
	dstlen = str1 - dst;
	diff = dstsize - dstlen;
	if (diff == 0)
		return (ft_strlen(src) + dstlen);
	while (*str2 != '\0')
	{
		if (diff > 1)
		{
			*str1++ = *str2;
			diff--;
		}
		str2++;
	}
	*str1 = '\0';
	return (dstlen + (str2 - src));
}
