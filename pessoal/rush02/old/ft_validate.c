/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdanelon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 09:27:52 by jdanelon          #+#    #+#             */
/*   Updated: 2019/12/08 10:39:28 by jdanelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

int		ft_is_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

char	*ft_validate(char *str)
{
	int		i;
	int		j;
	int		len;
	char	*copy;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	copy = (char *)malloc(len);
	while (str[i] != '\0' && ft_is_whitespace(str[i]) == 1)
		i++;
	if (str[i] < '0' || str[i] > '9')
		return ("-");
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if ((str[i + 1] < '0' || str[i + 1] > '9') && str[i + 1] != '\0')
			return ("-");
		copy[j] = str[i];
		i++;
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
