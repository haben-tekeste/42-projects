/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:02:33 by htekeste          #+#    #+#             */
/*   Updated: 2023/02/11 15:47:01 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "printf.h"

int	ft_count_hex_digits(unsigned int nbr)
{
	int	count;

	count = 0;
	while (nbr)
	{
		count++;
		nbr /= 16;
	}
	return (count);	
}

void	ft_puthex(int nbr, char type)
{
	char	*hex_lower;
	char	*hex_upper;

	hex_lower = "0123456789ABCDEF";
	hex_upper = "0123456789abcdef";
	if (nbr < 16)
	{
		if (nbr <= 9)
		{
			ft_putchar_fd(nbr + '0', 1);
		}
		else
		{
			if (type == 'x')
			{
				ft_putchar_fd(hex_lower[nbr] + '0', 1);
			}
			else
			{
				ft_putchar_fd(hex_upper[nbr] + '0', 1);
			}
		}
	}
	else
	{
		ft_print_hex(nbr / 16, type);
		ft_print_hex(nbr % 16, type);
    }
	free(hex_lower);
	free(hex_upper);
}

int	ft_print_hex(int nbr, char type)
{
	if (nbr == 0)
	{
		ft_putnbr_fd(0, 1);
		return (1);
	}
	return (ft_count_hex_digits(nbr));
}
