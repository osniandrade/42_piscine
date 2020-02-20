/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 08:26:12 by ocarlos-          #+#    #+#             */
/*   Updated: 2020/01/29 13:01:54 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srcsz;

	i = 0;
	j = 0;
	srcsz = 0;
	while (src[srcsz] != '\0')
		srcsz++;
	while (dest[i] && (i < size))
		i++;
	while (src[j] && ((i + j + 1) < size))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size)
		dest[i + j] = '\0';
	return (i + srcsz);
}
