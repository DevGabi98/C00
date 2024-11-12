/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:26:57 by vhacman           #+#    #+#             */
/*   Updated: 2024/11/12 16:02:40 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n <= 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

/*
int main(void)
{
	int number;
	number = -1;
	ft_is_negative(number);
	return 0;

}
*/
