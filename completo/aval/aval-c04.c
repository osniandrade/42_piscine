// C04

#include <unistd.h>
#include <stdio.h>
#include <string.h>

//#include "ex00/ft_strlen.c"
//#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
//#include "ex03/ft_atoi.c"
//#include "ex04/ft_putnbr_base.c"
//#include "ex05/ft_atoi_base.c"

int		main(void)
//int		main(int argc, *argv[])
{
// ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 -

	/*
	char	src[] = "domingo legal";

	printf("source  - %s\n", src);
	printf("%d\n", ft_strlen(src));
	*/

// ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 -

	/*
	char	src[] = "pra quem vc tira o chapéu";

	printf("%s\n", src);
	ft_putstr(src);
	*/

// ex02 - ex02 - ex02 - ex02 - ex02 - ex02 - ex02 - ex02 - ex02 - ex02 -

	
	int 	min = -2147483648;
	int		max = 2147483647;
	int		zero = 0;

	ft_putnbr(min);
	printf("\n");
	ft_putnbr(max);
	printf("\n");
	ft_putnbr(zero);
	

// ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 -

	/*
	char	src[] = " 		 -+----++-+-52245152d114d2s14a52sa";
	int		num;

	printf(" vetor  - %s\n", src);
	num = ft_atoi(src);
	printf("numero - %d\n", num);
	*/

// ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 -

	/*
	printf("Binary Base: ");
	printf("\n");
	ft_putnbr_base(10, "01");
	printf("\n");
	printf("Decimal Base: ");
	printf("\n");
	ft_putnbr_base(10, "0123456789");
	printf("\n");
	printf("HexaDecimal Base: ");
	printf("\n");
	ft_putnbr_base(10, "0123456789ABCDEF");
	printf("\n");
	*/

// ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 - ex05 -

	/*
    char base1[] = "0123456789";
    char str1[] = "1234";
    printf("%d\n",ft_atoi_base (str1,base1));

    char base2[] = "0123456789ABCDEF";
    char str2[] = "1234";
    printf("%d\n",ft_atoi_base (str2,base2));

    char base3[] = "01234567";
    char str3[] = "1234";
    printf("%d\n",ft_atoi_base (str3,base3));

    char base4[] = "01";
    char str4[] = "1000";
    printf("%d\n",ft_atoi_base (str4,base4));
	*/

	return (0);
}
