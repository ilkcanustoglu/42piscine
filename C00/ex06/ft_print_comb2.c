/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iustoglu <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:35:04 by iustoglu          #+#    #+#             */
/*   Updated: 2021/11/24 19:35:57 by iustoglu         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char f, char s, char t, char fr)
{
	write(1, &f, 1);
	write(1, &s, 1);
	write(1, " ", 1);
	write(1, &t, 1);
	write(1, &fr, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	char	f;
	char	s;
	char	t;
	char	fr;

	f = '0';
	while (f <= '9')
	{
		t = f;
		s = '0';
		while (s <= '9')
		{
			fr = s + 1;
			while (fr <= '9')
			{
				putchar(f, s, t, fr);
				fr++;
			}
			s++;
		}
		f++;
	}
}
