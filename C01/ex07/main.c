/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:58:18 by iustoglu          #+#    #+#             */
/*   Updated: 2021/11/28 19:11:16 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int SIZE);

int	main(void)
{
	int	tab[20];
	int	i;
	int	size;

	size = 20;
	i = 0;
	while (i < size)
	{
		tab[i] = size - i;
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d: %d\n", i + 1, tab[i]);
		i++;
	}
}
