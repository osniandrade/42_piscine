/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 08:31:01 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/11/28 14:40:21 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char dig)
{
	write(1, &dig, 1);
}

void	ft_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 0;
	num2 = 1;
	while (num1 <= 98)
	{
		while (num2 <= 99)
		{
			ft_putchar((num1 / 10) + '0');
			ft_putchar((num1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((num2 / 10) + '0');
			ft_putchar((num2 % 10) + '0');
			if (num1 != 98)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
}
