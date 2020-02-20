/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:37:50 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/01 07:29:30 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		swp;

	i = size - 1;
	while (i > 0)
	{
		if (tab[i] < tab[i - 1])
		{
			swp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = swp;
			i = size;
		}
		i--;
	}
}
