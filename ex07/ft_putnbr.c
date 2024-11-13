#include <unistd.h>

void	ft_write_num(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
                write (1, "-2147483648", 11); //verifica che il numero non superi il valore limite negativo di INT
		return ;
	}
	if (nb < 0)
	{
		ft_write_num('-'); //se il numero inserito è un numero negativo, 'scrive' un - davanti al numero stesso(macchina non capisce il numero negativo in quanto tale).
		nb *= -1; //cambia il segno al numero (-- è +)
	}
	if (nb > 9)
	{ 
		ft_putnbr (nb / 10); //richiama se stesso con il valore di nb/10 e manda in display le decine, ricomincia da capo e verifica di nuovo le condizioni.
	}
	ft_write_num (nb % 10 + '0'); //(nonostante richiami se stessa e scrive le decine) scrive anche le unita'. il %nb è unità che +'0' lo trasforma in carattere ASCII
}

int	main(void)
{
	ft_putnbr(-765);
	ft_write_num('\n');	//inserisco nuova riga
	ft_putnbr(436842);
	ft_write_num('\n');
	ft_putnbr(34);
	ft_write_num('\n');
	return (0);
}
