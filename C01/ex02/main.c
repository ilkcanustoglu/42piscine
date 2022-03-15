/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:06:16 by iustoglu          #+#    #+#             */
/*   Updated: 2021/11/28 15:18:22 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 53;
	b = 42;
	printf("my first values : %d, %d\n ", a, b);
	ft_swap(&a, &b);
	printf("my last values : %d, %d\n", a, b);
}
