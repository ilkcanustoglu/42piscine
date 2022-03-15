/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:43:54 by iustoglu          #+#    #+#             */
/*   Updated: 2021/11/29 14:44:06 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strupcase(char *str)
{
	int		index;
	char	curr;

	index = 0;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (curr >= 'a' && curr <= 'z')
		{
			str[index] = curr - 32;
		}
		index++;
	}
	return (str);
}
