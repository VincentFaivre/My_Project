/*
** EPITECH PROJECT, 2018
** [N/A] {Vincent FAIVRE}
** File description:
** My main function
*/

#include "my_project.h"

/*
** print_help =
** Print the help message
**
** @param	N/A
** @return	N/A
*/
static void print_help(void)
{
	my_putstr("Project created in language C by Vincent FAIVRE\n\n");
	my_putstr("USAGE\n ./exe arg1 agr2 ...\n\n");
	my_putstr("DESCRIPTION\n arg1\tdescription.\n ");
	my_putstr("arg2\tdescription.\n\n");
	my_putstr("OPTIONS\n -h\tprint the help and quit.\n");
}

void print_all_nb_conversion(int nb)
{
	my_printf("\033[42mYour number is...\033[0m\n%b in binary\n%o in octal\n\
%X in hexadecimal\n", nb, nb, nb);
//	printf("\nWith printf()...\n%o in octal\n%X in hexadecimal\n", nb, nb);
}

/*
** main =
** My main function, that's all
**
** @param	ac	Number of program's arguments
** @param	av	Double array that contains program's arguments
** @return	SUCCESS(0) if everything is ok OR FAILURE(84) if it fails
*/
int main(int ac, char **av)
{
	int nb = 0;
	char *ptr = NULL;

	if (ac == 2 && my_strequal(av[1], "-h")) {
		print_help();
		return SUCCESS;
	}
	my_printf("Type a number: ");
	ptr = get_next_line(0, &nb);
	if (nb <= 1 || my_getnbr(ptr, &nb) == -1) {
		my_putstr_error("A number is needed!\n");
		return FAILURE;
	}
	my_printf("\n");
	free(ptr);
	print_all_nb_conversion(nb);
	launch_csfml();
	return SUCCESS;
}
