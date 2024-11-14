/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:11:12 by vhacman           #+#    #+#             */
/*   Updated: 2024/11/14 09:27:18 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_num_converted(char num_converted)
{
	write(1, &num_converted, 1);
}

void	ft_convert(int a, int b, int c)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;

	first_digit = a + '0';
	second_digit = b + '0';
	third_digit = c + '0';
	ft_put_num_converted(first_digit);
	ft_put_num_converted(second_digit);
	ft_put_num_converted(third_digit);
	if (!(first_digit == '7' && second_digit == '8' && third_digit == '9'))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)

{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_convert(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
