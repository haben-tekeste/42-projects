/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:00:01 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 13:56:24 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	while (s1[c] == s2[c] && c < n - 1 && (s1[c] || s2[c]))
	{
		c++;
	}
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}
