/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 04:43:34 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 13:54:47 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

// size_t	ft_count(const char* s, char c)
// {
// 	size_t  i;
//     size_t  count;

// 	i = 0;
// 	count = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 		{
// 			count++ ;
// 		}
// 		i++ ;
//     }
//     return (count);
// }
// size_t	**ft_split(char const *s, char c)
// {
// 	size_t	first;
// 	size_t	occurence;
// 	size_t	i;
// 	size_t	k;
// 	char	*temp;
// 	char	**result;

// 	first = 0;
// 	i = 0;
// 	k = 0;
// 	occurence = ft_count(s, c);
// 	result = (char **)malloc((occurence + 2) * sizeof(char *));
// 	while (s[i])
// 	{
// 		if (s[0] == c || (first - i == 0) && s[i] == c)
// 		{
// 			temp = (char *) malloc(2 * sizeof(char));
// 			ft_strlcpy(temp," ",2);
// 			result[k] = temp;
// 			k++;
// 			i++;
// 			first = i;
// 			continue;
//         }
// 		if (k == occurence)
// 		{
// 			temp = (char *) malloc(ft_strlen(s) - first + 1 * sizeof(char));
// 			ft_strlcpy(temp,&s[first], ft_strlen(s) - first + 1);
// 			result[k] = temp;
// 			k++;
// 			break;
//         }
// 		if (s[i] == c)
// 		{
// 			temp = (char *) malloc(i - first + 1 * sizeof(char));
// 			ft_strlcpy(temp,&s[first], i - first + 1);
// 			result[k] = temp;
// 			k++;
// 			first = i + 1;
//         }
// 		if (i == ft_strlen(s) - 1 && s[i] == c)
// 		{
// 			temp = (char *) malloc(2 * sizeof(char));
// 			ft_strlcpy(temp," ",2);
// 			result[k] = temp;
// 			k++;
// 			break;
//         }
// 		i++;
//     }
// 	result[k] = '\0';
// 	return (occurence);
// }
