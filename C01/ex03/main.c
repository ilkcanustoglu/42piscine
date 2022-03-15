/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:27:04 by iustoglu          #+#    #+#             */
/*   Updated: 2021/11/28 15:47:55 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 53;
	b = 42;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("div =  %d",*div);
	printf("\nmod = %d",*mod);
}
