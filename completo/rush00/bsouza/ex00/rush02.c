/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 16:29:35 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/11/24 15:50:02 by ocarlos-         ###   ########.fr       */
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
			if ((py == 1) && ((px == 1) || (px == x)))
				ft_putchar('A');
			else if ((py == y) && ((px == 1) || (px == x)))
				ft_putchar('C');
			else if ((py == 1) || (py == y) || (px == 1) || (px == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			px++;
		}
		ft_putchar('\n');
		px = 1;
		py++;
	}
}
