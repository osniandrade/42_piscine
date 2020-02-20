/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 08:48:37 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/11/27 14:27:38 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(int dig1, int dig2, int dig3)
{
	write(1, &dig1, 1);
	write(1, &dig2, 1);
	write(1, &dig3, 1);
	if (dig1 == 55)
	{
		return (0);
	}
	else
	{
		write(1, ", ", 2);
	}
	return (0);
}

void	ft_print_comb(void)
{
	int d1;
	int d2;
	int d3;

	d1 = 48;
	d2 = 48;
	d3 = 48;
	while (d1 <= 57)
	{
		while (d2 <= 57)
		{
			while (d3 <= 57)
			{
				if ((d1 < d2) && (d2 < d3))
				{
					ft_putchar(d1, d2, d3);
				}
				d3++;
			}
			d3 = 48;
			d2++;
		}
		d2 = 48;
		d1++;
	}
}
