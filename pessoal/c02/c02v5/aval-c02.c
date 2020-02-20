/*
** codigo para testes da lista C01
** descomente as linhas do exercício a ser testado
** 30/11/2019
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>
//#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
//#include "ex02/ft_str_is_alpha.c"
//#include "ex03/ft_str_is_numeric.c"
//#include "ex04/ft_str_is_lowercase.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"
//#include "ex07/ft_strupcase.c"
//#include "ex08/ft_strlowcase.c"
//#include "ex09/ft_strcapitalize.c"
//#include "ex10/ft_strlcpy.c"
//#include "ex11/ft_putstr_non_printable.c"

int	main(void)
{
	/* ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 */

	/*
	char	str1[] = "chumbawamba";
	char	str2[] = "XXXXXXXXXXX";

	ft_strcpy(str2, str1);
	printf("%s\n", str1);
	printf("%s\n", str2);
	*/

	/* ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 */


	char test[256] = "asdf";
	char test1[256] = "asdf";
	
	printf("Função da Biblioteca\n");
	printf("%s\n", strncpy(test, "uiop", 6));
	printf("%s\n", strncpy(test, "qwerty", 4));
	printf("%s\n", strncpy(test, "z", 1));
	printf("\nMinha Função\n");
	printf("%s\n", ft_strncpy(test1, "uiop", 6));
	printf("%s\n", ft_strncpy(test1, "qwerty", 4));
	printf("%s\n", ft_strncpy(test1, "z", 1));

	/* ex02 -  ex02 -  ex02 -  ex02 -  ex02 -  ex02 -  ex02 -  ex02 -  ex02 */

	/*
	char	str1[] = "abcfegddf";
	char	str2[] = "abbdghs2b221";
	char	str3[] = "12332";
	char	str4[] = "";
	int		res;

	res = ft_str_is_alpha(str1);
	printf("%d\n", res);
	res = ft_str_is_alpha(str2);
	printf("%d\n", res);
	res = ft_str_is_alpha(str3);
	printf("%d\n", res);
	res = ft_str_is_alpha(str4);
	printf("%d\n", res);
	*/

	/* ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 */
	
	/*
	char	str1[] = "abcfegddf";
	char	str2[] = "abbdghs2b221";
	char	str3[] = "12332";
	char	str4[] = "";
	int		res;

	res = ft_str_is_numeric(str1);
	printf("%d\n", res);
	res = ft_str_is_numeric(str2);
	printf("%d\n", res);
	res = ft_str_is_numeric(str3);
	printf("%d\n", res);
	res = ft_str_is_numeric(str4);
	printf("%d\n", res);
	*/

	/* ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 */
	
	/*
	char	str1[] = "abcfegddf";
	char	str2[] = "aASDds2b221";
	char	str3[] = "12332";
	char	str4[] = "";
	int		res;

	res = ft_str_is_lowercase(str1);
	printf("%d\n", res);
	res = ft_str_is_lowercase(str2);
	printf("%d\n", res);
	res = ft_str_is_lowercase(str3);
	printf("%d\n", res);
	res = ft_str_is_lowercase(str4);
	printf("%d\n", res);
	*/

	/* ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 */
	
	/*
	char	str1[] = "ABHHDJSAKS";
	char	str2[] = "aASDds2b221";
	char	str3[] = "12332";
	char	str4[] = "";
	int		res;

	res = ft_str_is_uppercase(str1);
	printf("%d\n", res);
	res = ft_str_is_uppercase(str2);
	printf("%d\n", res);
	res = ft_str_is_uppercase(str3);
	printf("%d\n", res);
	res = ft_str_is_uppercase(str4);
	printf("%d\n", res);
	*/

	/* ex06 - ex06 - ex06 - ex06 - ex06 - ex06 - ex06 - ex06 - ex06 - ex06 */
	
	/*
	char	str1[] = "AvasK!{~]aDLASJK";
	char	str2[] = "aASDds2b221";
	char	str3[] = "\n2ii\0k2";
	char	str4[] = "";
	int		res;

	res = ft_str_is_printable(str1);
	printf("%d\n", res);
	res = ft_str_is_printable(str2);
	printf("%d\n", res);
	res = ft_str_is_printable(str3);
	printf("%d\n", res);
	res = ft_str_is_printable(str4);
	printf("%d\n", res);
	*/

	/* ex07 - ex07 - ex07 - ex07 - ex07 - ex07 - ex07 - ex07 - ex07 - ex07 */
	
	/*
	char str[] = "mafaguifos";

	ft_strupcase(str);
	printf("%s\n", str);
	*/

	/* ex08 - ex08 - ex08 - ex08 - ex08 - ex08 - ex08 - ex08 - ex08 - ex08 */

	/*
	char str[] = "CASCARASAGRADA";

	ft_strlowcase(str);
	printf("%s\n", str);
	*/
	

	/* ex09 - ex09 - ex09 - ex09 - ex09 - ex09 - ex09 - ex09 - ex09 - ex09 */

	/*
	char	str[] = "oi, tuDo bem? 42Palavras quarenta-E-duas; cinquenta+e+um";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	*/

	/* ex10 - ex10 - ex10 - ex10 - ex10 - ex10 - ex10 - ex10 - ex10 - ex10 */

	/*
	char str1[] = "NON DESLIG O FRIZZ\0 A NOTCH";
	char str2[] = "xxxxxxxxxxxxxxxxxxxxxxx";
	int size = 26;
	int newsize;

	newsize = ft_strlcpy(str2, str1, size);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%d\n", newsize);
	// printf("FUNÇAÕ PADRÃO");
	// newsize = strlcpy(str2, str1, size);
	// printf("%s\n", str1);
	// printf("%s\n", str2);
	// printf("%d\n", newsize);
	*/

	/* ex11 - ex11 - ex11 - ex11 - ex11 - ex11 - ex11 - ex11 - ex11 - ex11 */

	/*
	char	str1[] = "desculpe chef\nobrigado chef";

	ft_putstr_non_printable(str1);
	*/

	return(0);
}