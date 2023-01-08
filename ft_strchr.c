/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:52:51 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 12:45:11 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s++)
	{
		if (c == *s)
		{
			return ((char *)s);
		}
	}
	return (NULL);
}
