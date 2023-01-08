/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 08:59:45 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 12:41:43 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == c)
		{
			return ((unsigned char *)s);
		}
		i++;
		s++;
	}
	return (NULL);
}
