/*
** codigo para testes da lista C00
** feito por c00v1-
** descomente as linhas do exercício a ser testado
** 27/11/2019
*/

#include <unistd.h>
//#include "c00v1/ex00/ft_putchar.c"
//#include "c00v1/ex01/ft_print_alphabet.c"
//#include "c00v1/ex02/ft_print_reverse_alphabet.c"
//#include "c00v1/ex03/ft_print_numbers.c"
//#include "c00v1/ex04/ft_is_negative.c"
#include "c00v1/ex05/ft_print_comb.c"
//#include "c00v1/ex06/ft_print_comb2.c"
//#include "c00v1/ex07/ft_putnbr.c"
//#include "c00v1/ex08/ft_print_combn.c"


int	main(void)
{
	/* ex00 - mostra caractere passado como parâmetro */
	//ft_putchar('A');

	/* ex01 - mostra alfabeto em minúsculo em ordem crescente */
	//ft_print_alphabet();

	/* ex02 - mostra o alfabeto em maiúsculo em ordem decrescente */
	//ft_print_reverse_alphabet();

	/* ex03 - mostra números em ordem crescente, em uma linha*/
	//ft_print_numbers();

	/* ex04 - mostra N se for negativo ou P se for zero ou positivo*/
	/*
	ft_is_negative(-9);
	write(1, "\n", 1);
	ft_is_negative(9);
	write(1, "\n", 1);
	ft_is_negative(-0);
	*/

	/* ex05 - mostra todas as combinações crescentes de 3 números */
	ft_print_comb();

	/* ex06 - combinações crescentes de 2 números de 2 dígitos */
	//ft_print_comb2();

	/* ex07 - escreve um número passado como parâmetro */
	
	// ft_putnbr(-124);
	// write(1, "\n", 1);
	// ft_putnbr(10);	
	// write(1, "\n", 1);
	// ft_putnbr(15126);
	// write(1, "\n", 1);
	// ft_putnbr(-2147483648);
	// write(1, "\n", 1);
	// ft_putnbr(2147483647);
	

	/* ex08 - mostra as combinações de n números em ordem crescente */
	//ft_print_combn(2);

	return(0);
}