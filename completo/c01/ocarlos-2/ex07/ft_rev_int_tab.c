/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 07:44:50 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/01 07:14:34 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		index;
	int		swp;

	index = 0;
	while (index < (size / 2))
	{
		swp = tab[index];
		tab[index] = tab[(size - 1) - index];
		tab[(size - 1) - index] = swp;
		index++;
	}
}
