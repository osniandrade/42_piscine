/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 09:57:39 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/05 08:37:26 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				old;

	i = 0;
	old = 0;
	if (size > 0)
	{
		while ((src[i] != '\0') && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
	}
	while (src[old] != '\0')
	{
		old++;
	}
	dest[i] = '\0';
	return (old);
}
