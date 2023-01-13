/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 06:10:08 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 12:43:36 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++ ;
	}
}
