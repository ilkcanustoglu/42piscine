/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:46:18 by iustoglu          #+#    #+#             */
/*   Updated: 2021/11/24 16:58:10 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	poz;
	char	neg;

	poz = 'P';
	neg = 'N';
	if (n >= 0)
	{
		write(1, &poz, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}