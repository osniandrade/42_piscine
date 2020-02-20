// C03

#include <unistd.h>
#include <stdio.h>
#include <string.h>

//#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
//#include "ex02/ft_strcat.c"
//#include "ex03/ft_strncat.c"
//#include "ex04/ft_strstr.c"

int		main(void)
{
// ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 - ex00 -

	/*
	char	src[] = "teste do junir";
	char	dst[] = "teste do junor";
	char	src1[] = "teste do junir";
	char	dst1[] = "teste do junor";

	printf("source  - %s\n", src);
	printf("destiny - %s\n", dst);
	printf("%d\n", ft_strcmp(src, dst));
	printf("source  - %s\n", src1);
	printf("destiny - %s\n", dst1);
	printf("%d\n", strcmp(src1, dst1));
	*/

// ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 - ex01 -

	
	char	src[] = "teste do junior";
	char	dst[] = "teste do carlos";
	char	src1[] = "teste do junior";
	char	dst1[] = "teste do carlos";
	unsigned int		comp = 13;

	printf("source  - %s\n", src);
	printf("destiny - %s\n", dst);
	printf("%d\n", ft_strncmp(src, dst, comp));
	printf("source  - %s\n", src);
	printf("destiny - %s\n", dst1);
	printf("%d\n", strncmp(src1, dst1, comp));
	

// ex02 - ex02 - ex02 - ex02 - ex02 - ex02 - ex02 - ex02 - ex02 - ex02 -

	/*
	char	src[] = "teste do junior\0              ";
	char	dst[] = "teste da eliane";

	ft_strcat(dst, src);
	printf("source  - %s\n", src);
	printf("destiny - %s\n", dst);
	*/

// ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 - ex03 -

	/*
	char	src[] = "teste do junior";
	char	dst[] = "teste da eliane\0              ";
	unsigned int	cpy = 7;

	printf("source  - %s\n", src);
	printf("destiny - %s\n", dst);
	ft_strncat(dst, src, cpy);
	printf("source  - %s\n", src);
	printf("destiny - %s\n", dst);
	*/

// ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 - ex04 -

	/*
	char	src[] = "ba da bing, ba da bang, ba da boom";
	char	find[] = "bung";
	char	*res;

	res = strstr(src, find);
	printf("source  - %s\n", src);
	printf("find - %s\n", find);
	printf("response - %s\n", res);
	*/

	return (0);
}