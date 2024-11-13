/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:25:06 by vhacman           #+#    #+#             */
/*   Updated: 2024/11/13 11:11:04 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_number(int number)
{
	ft_putchar(number / 10 + '0');
	ft_putchar(number % 10 + '0');
}

void	ft_print_comb2(void)
{
	int fst_num;
	int snd_num;

	while (fst_num < 99)
	{
		snd_num = fst_num + 1;
		while (snd_num < 100)
		{
			ft_put_number(fst_num);
			ft_putchar(' ');
			ft_put_number(snd_number);
			if (fst_num != 98 || snd_num != 99)
			{
				ft_putchar(',', ' ');
				ft_putchar(' ');
			}
			snd_num++;
		}
		fst_num++;
	}
}


int	main(void)
{
	ft_print_comb2();
	return (0);
}
