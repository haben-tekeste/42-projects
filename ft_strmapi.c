/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 05:52:54 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 11:52:49 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	if (!s)
		return (NULL);
	result = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++ ;
	}
	result[i] = '\0';
	return (result);
}
