/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:16:56 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/02 16:32:41 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*a;

	i = 0;
	a = (unsigned char *)b;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (a);
}

// int main()
// {
//    char str[50];

//    strcpy(str,"This is string.h library function");
//    puts(str);

//    ft_memset(str,'$',7);
//    puts(str);  
//    return(0);
// }
