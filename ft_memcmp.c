/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 09:05:41 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 16:38:04 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char*	str1;
	const unsigned char*	str2;

	i = 0;
	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n && (str1[i] == str2[i]))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
