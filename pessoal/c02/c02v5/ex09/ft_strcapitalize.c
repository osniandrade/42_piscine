/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 19:40:27 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/03 10:29:52 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_checklo(char *str, int i)
{
	if ((str[i] >= 'a') && (str[i] <= 'z'))
		return (1);
	else
		return (0);
}

int		ft_checkup(char *str, int i)
{
	if ((str[i] >= 'A') && (str[i] <= 'Z'))
		return (1);
	else
		return (0);
}

int		ft_checknu(char *str, int i)
{
	if (((str[i]) >= '0') && ((str[i]) <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_checkup(str, i))
		{
			str[i] += 32;
		}
		i++;
	}
	while (i >= 0)
	{
		if ((ft_checklo(str, i)) && (!(ft_checklo(str, i - 1)
		|| (ft_checknu(str, i - 1)))))
		{
			str[i] -= 32;
		}
		i--;
	}
	return (str);
}
