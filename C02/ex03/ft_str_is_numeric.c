/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftr_str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:28:55 by iustoglu          #+#    #+#             */
/*   Updated: 2021/11/29 16:56:52 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
