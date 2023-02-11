/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:49:02 by htekeste          #+#    #+#             */
/*   Updated: 2023/02/11 16:08:19 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "printf.h"

size_t	ft_count_digits(unsigned int nbr)
{
	size_t	digits;

	digits = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_unbr_tostr(unsigned int nbr)
{
	char	*str;
	int		c;

	c = ft_count_digits(nbr);
	str = (char *) malloc (sizeof(char) * (c + 1));
	if (!str)
		return (NULL);
	str[c] = '\0';
	while (nbr != 0)
	{
		str[c - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		c--;
	}
	return (str);
}


int	ft_print_unsigned_decimal(unsigned int nbr)
{
	char	*tmp;
	int		count;

	if (nbr == 0)
		return (ft_print_char(nbr));
	tmp = ft_unbr_tostr(nbr);
	count = ft_print_str(tmp);
	free(tmp);
	return (count);	
}