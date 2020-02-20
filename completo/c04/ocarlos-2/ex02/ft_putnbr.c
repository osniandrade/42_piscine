/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 10:02:03 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/11 16:03:54 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	else
		n = nb;
	if (n < 10)
		ft_putchar(n + '0');
	if ((n / 10) > 0)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}
