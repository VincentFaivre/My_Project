/*
** EPITECH PROJECT, 2017
** [N/A] {Vincent FAIVRE}
** File description:
** 1 function
*/

#include "basic_c.h"

/*
** my_putnbr =
** Print the number given as parameter on the stdout (fd = 1)
**
** @param	nbr	Number to print
** @return	The length of {nbr}
*/
size_t my_putnbr(int nbr)
{
	bool_t minus = FALSE;

	if (nbr < 0) {
		my_putchar('-');
		nbr = -nbr;
		minus = TRUE;
	}
	if (nbr > 9) {
		my_putnbr(nbr / 10);
		my_putchar('0' + nbr % 10);
	} else
		my_putchar('0' + nbr);
	return (my_nbrlen(nbr, NO) + minus);
}
