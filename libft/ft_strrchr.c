/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:16:35 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 16:53:28 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	b;

	len = ft_strlen(s)-1;
	b = c;
	if (b == '\0')
		return ((char *) s + ft_strlen(s));
	while (len >= 0)
	{
		if (b == s[len])
		{
			return ((char *)s + len);
		}
		len--;
	}
	return (NULL);
}
