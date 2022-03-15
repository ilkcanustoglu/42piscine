/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:51:25 by iustoglu          #+#    #+#             */
/*   Updated: 2021/11/27 14:37:15 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;

	a = 53;
	printf("first number %d\n", a);
	ft_ft(&a);
	printf("last number  %d", a);
}
