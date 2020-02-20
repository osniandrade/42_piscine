/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:29:35 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/11/24 18:39:08 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	rush(int x, int y)
{
	int py;
	int px;

	py = 1;
	px = 1;
	while (py <= y)
	{
		while (px <= x)
		{
			if (((py == 1) || (py == y)) && ((px == 1) || (px == x)))
				ft_putchar('o');
			else if (((py == 1) || (py == y)) && ((px != 1) || (px != x)))
				ft_putchar('-');
			else if (((py != 1) || (py != y)) && ((px == 1) || (px == x)))
				ft_putchar('|');
			else
				ft_putchar(' ');
			px++;
		}
		ft_putchar('\n');
		px = 1;
		py++;
	}
}
