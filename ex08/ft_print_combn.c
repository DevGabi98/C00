/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:49:59 by vhacman           #+#    #+#             */
/*   Updated: 2024/11/14 12:00:26 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//creo la funzione per stampare una combinazione
void	ft_print_combination(comb[], int n, int last)
{
	int i;
	int i = 0;
	while (i < n)
	{
		char c;

		c = comb [i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (!last)
		write(1, ", ", 2);
}

//creo la funzione per generare le combinazioni possibili

void	ft_generate_combinations(int comb [], int n, int index, int start)
{
	if (index == n)
	{
		ft_generate_combinations(comb, n, start > 9);
		return ;
	}
	while (start <= 9)
	{
		comb[index] = start;
		ft_generate_combinations(comb, n, index + 1, start + 1);
		start ++;
	}

//questa funzione deve essere in grado di stamp tutte le combinazioni di N numeri (da 0 a 9) in ordine crescente.
void	ft_print_combn(int n)
{
	int comb[10];
	if (n > 0 && n < 10)
	{
		ft_generate_combinations(comb, n, 0, 0);
		write (1, "\n", 1);
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
