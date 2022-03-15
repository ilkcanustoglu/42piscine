/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:15:33 by iustoglu          #+#    #+#             */
/*   Updated: 2021/12/13 11:15:37 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*a;
	int	*d;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	a = (int *)malloc(sizeof(int) * len);
	d = a;
	if (!d)
		return (0);
	while (i < len)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}
