/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 11:11:07 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/10 11:37:20 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_tstspc(char *str, int i)
{
	if ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\n') ||
		(str[i] == '\r') || (str[i] == '\t') || (str[i] == '\v'))
		return (1);
	return (0);
}

int		ft_isnbr(char *str, int i)
{
	if ((str[i] >= '0') && (str[i] <= '9'))
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int		i;
	int		sig;
	int		num;

	i = 0;
	sig = 1;
	num = 0;
	while (ft_tstspc(str, i))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (ft_isnbr(str, i))
		num = num * 10 + (str[i++] - 48);
	return (num * sig);
}
