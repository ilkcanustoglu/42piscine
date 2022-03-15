/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:57:22 by iustoglu          #+#    #+#             */
/*   Updated: 2021/11/24 16:21:15 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	rev_alphabet;

	rev_alphabet = 'z';
	while (rev_alphabet >= 'a')
	{
		ft_putchar(rev_alphabet);
		rev_alphabet--;
	}
}
