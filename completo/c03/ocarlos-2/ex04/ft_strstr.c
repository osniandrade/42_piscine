/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 15:49:07 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/09 07:44:48 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	while (to_find[j] != '\0')
		j++;
	size = j;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
			while ((str[i + j] == to_find[j]) && (str[i + j] != '\0'))
				j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
