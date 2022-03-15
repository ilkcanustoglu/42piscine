/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:13:05 by iustoglu          #+#    #+#             */
/*   Updated: 2021/11/28 17:44:15 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	k;
	int	p;

	k = 10;
	p = 6;
	ft_ultimate_div_mod(&k, &p);
	printf("değer: %d, %d\n", k, p);
}
