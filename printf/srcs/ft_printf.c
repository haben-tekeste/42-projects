/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:18:41 by htekeste          #+#    #+#             */
/*   Updated: 2023/02/11 16:10:08 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	check_type(va_list args, char c)
{
	int	counter;

	counter = 0;
	if (!c || !args)
		return(0);
	if (c == 'd' || c == 'i')
	{
		counter += ft_print_num(va_arg(args, int));
	}
	else if (c == 's')
	{
		counter += ft_print_str(va_arg(args, char *));
	}
	else if (c == 'c')
	{
		counter += ft_print_char(va_arg(args, int));
	}
	else if (c == 'x' || c == 'X')
	{
		counter += ft_print_hex(va_arg(args, int),c);
	}
	else if (c == '%')
	{
		counter += ft_print_percent(va_arg(args, char));
	}
	return (counter);
}

int	ft_printf(char *ft,...)
{
	va_list args;
	int		i;
	int		counter;

	if (!ft)
		return (0);
	i = 0;
	counter = 0;
	va_start(args, ft);
	while (ft[i] != '\0')
	{
		counter++;
		if (ft[i] == '%')
		{
			counter += check_type(args, ft[i + 1]);
			i++;
		}
		ft_putchar_fd(ft[i], 1);
	}  
	va_end(args);
	return (0);
}

