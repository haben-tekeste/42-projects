/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 04:42:02 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 19:49:56 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_cpy(char *s1, char *s2, unsigned int start)
{
	size_t	i;

	i = 0;
	while (s2[i])
	{
		s1[i + start] = s2[i];
		i++;
	}
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*str3;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	str3 = (char *) malloc(len * sizeof(char));
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!str3)
		return (NULL);
	str3 = ft_cpy(str3, str1, 0);
	str3 = ft_cpy(str3, str2, ft_strlen(str1));
	str3[len] = '\0';
	return (str3);
}
