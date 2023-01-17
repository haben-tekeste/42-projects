/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 04:45:23 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 16:57:41 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		first;
	int		last;

	first = 0;
	if (!s1)
		return (NULL);
	last = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[first]) && first < last)
		first++;
	if (first == last)
	{
		result = (char *) malloc(1 * sizeof(char));
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	while (ft_strchr(set, s1[last]) && last > first)
		last--;
	result = (char *) malloc((last - first + 2) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[first], last - first + 2);
	return (result);
}
