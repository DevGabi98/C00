#include <unistd.h>

void    ft_write_num(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
        if (nb == -2147483648)
        {
                write(1, "-2147483648", 11); // Verifica il caso limite negativo
        }
        else if (nb < 0)
        {
                ft_write_num('-');  // Scrive il segno meno per numeri negativi
                nb *= -1;           // Cambia il segno al numero per continuare con numeri positivi
                if (nb > 9)
                {
                    ft_putnbr(nb / 10); // Chiamata ricorsiva per scrivere le decine
                }
                ft_write_num(nb % 10 + '0'); // Scrive l'unità
        }
        else // Se il numero è positivo
        {
                if (nb > 9)
                {
                    ft_putnbr(nb / 10); // Chiamata ricorsiva per scrivere le decine
                }
                ft_write_num(nb % 10 + '0'); // Scrive l'unità
        }
}

int     main(void)
{
        ft_putnbr(-765);
        ft_write_num('\n');     // Nuova riga
        ft_putnbr(436842);
        ft_write_num('\n');
        ft_putnbr(34);
        ft_write_num('\n');
        return (0);
}

