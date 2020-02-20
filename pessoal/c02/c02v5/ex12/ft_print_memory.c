/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 07:41:48 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/05 08:24:52 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			str[5];
	unsigned int	i;

	while (i < size)
	{
		str[i] = addr[i++];
	}
	i = size;
}
