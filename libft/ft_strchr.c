/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:49:38 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 16:49:40 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;
	int		i;

	b = (char)c;
	i = 0;
	if (b == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (b == s[i])
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
