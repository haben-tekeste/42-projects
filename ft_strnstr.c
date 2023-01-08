/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:54:14 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 13:57:01 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_strnstr(const char *haystick, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle)
		return ((char *)haystick);
	while (needle[i])
	{
		while (haystick[j] && j < len)
		{
			if (needle[i] == haystick[j])
			{
				if (ft_memcmp(&needle[i], &haystick[j], len - j) == 0)
				{
					return ((char *)haystick + j);
				}
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Bar";
//     char *ptr;

//     ptr = ft_strnstr(largestring, smallstring, 7);
//     printf("Result: %s",ptr);
//     return 0;
// }