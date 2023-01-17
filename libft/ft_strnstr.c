/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:54:14 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/17 16:53:00 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_strnstr(const char *haystick, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_size;
	size_t	haystick_size;

	i = 0;
	if ((needle == haystick) || (needle[0] == '\0'))
		return ((char *)haystick);
	needle_size = ft_strlen(needle);
	if (len == 0)
		return (NULL);
	haystick_size = ft_strlen(haystick);
	if (len > haystick_size)
		len = haystick_size;
	while (haystick[i])
	{
		if ((len - i) < needle_size)
			return (NULL);
		if (haystick[i] == needle[0])
		{
			if (ft_strncmp(&haystick[i], needle, needle_size) == 0)
				return ((char *)haystick + i);
		}
		i++;
	}
	return (NULL);
}
