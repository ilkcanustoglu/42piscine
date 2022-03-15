/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:17:20 by iustoglu          #+#    #+#             */
/*   Updated: 2021/12/13 11:17:26 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	i;
	int	*d;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	a = (int *)malloc(sizeof(int) * (max - min));
	d = a;
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	while (i < (max - min))
	{
		a[i] = min + i;
		i++;
	}
	*range = a;
	return (max - min);
}
