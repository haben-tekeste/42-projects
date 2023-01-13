/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 04:47:15 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 19:43:24 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		sub = (char *) malloc(1 * sizeof(char));
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	sub = (char *) malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
