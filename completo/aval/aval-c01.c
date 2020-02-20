/*
** codigo para testes da lista C01
** descomente as linhas do exercício a ser testado
** 30/11/2019
*/

#include <unistd.h>
#include <stdio.h>
#include "ocarlos-/ex00/ft_ft.c"
//#include "ocarlos-/ex01/ft_ultimate_ft.c"
//#include "ocarlos-/ex02/ft_swap.c"
//#include "ocarlos-/ex03/ft_div_mod.c"
//#include "ocarlos-/ex04/ft_ultimate_div_mod.c"
//#include "ocarlos-/ex05/ft_putstr.c"
//#include "ocarlos-/ex06/ft_strlen.c"
//#include "ocarlos-/ex07/ft_rev_int_tab.c"
//#include "ocarlos-/ex08/ft_sort_int_tab.c"


int	main(void)
{
	/* ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 */

	
	int v = 15;
	ft_ft(&v);
	printf("%d", v);
	

	/* ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 */

	/*
	int a = 15;
	int* b = &a;
	int** c = &b;
	int*** d = &c;
	int**** e = &d;
	int***** f = &e;
	int****** g = &f;
	int******* h = &g;
	int******** i = &h;
	int********* j = &i;
	ft_ultimate_ft(j);
	printf("%d", a);
	*/

	/* ex02 -  ex02 -  ex02 -  ex02 -  ex02 -  ex02 -  ex02 -  ex02 -  ex02 */

	/*
	int a = 15;
	int b = -25;
	ft_swap(&a, &b);
	printf("%d,%d", a, b);
	*/

	/* ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 */
	
	/*
	int div = 0, mod = 0;
	ft_div_mod(40, 15, &div, &mod);
	printf("%d,%d", div, mod);
	return 0;
	*/

	/* ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 */
	
	/*
	int a = 40, b = 15;
	ft_ultimate_div_mod(&a, &b);
	printf("%d,%d", a, b);
	return 0;
	*/

	/* ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 */
	//ft_putstr("hello world!");

	/* ex06 - ex06 - ex06 - ex06 - ex06 - ex06 - ex06 - ex06 - ex06 - ex06 */
	
	/*
	printf("%d,%d,%d", ft_strlen("asdf"), ft_strlen("qwerty"), ft_strlen("zxc0zxc"));
	printf("%d", ft_strlen(""));
	*/

	/* ex07 - ex07 - ex07 - ex07 - ex07 - ex07 - ex07 - ex07 - ex07 - ex07 */
	
	/*
	int v[5] = {2, 3, 4, 5, 6};
	int size = 5;
	int i;
	ft_rev_int_tab(v,size);
	for (i=0; i<5; i++)
	{
		printf("%d ", v[i]);
	}
	*/

	/* ex08 - ex08 - ex08 - ex08 - ex08 - ex08 - ex08 - ex08 - ex08 - ex08 */

	/*
	int test1[] = {1,5,0,-2,3,6};
	int size = 6;
	ft_sort_int_tab(test1, size);
	for (int i = 0; i < size; i++)
		printf("%d,", test1[i]);
	*/

	return(0);
}