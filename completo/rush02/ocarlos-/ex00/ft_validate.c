/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdanelon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 09:27:52 by jdanelon          #+#    #+#             */
/*   Updated: 2019/12/08 14:29:56 by jdanelon         ###   ########.fr       */
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

int		ft_conta0(char *str, int idx)
{
	int	i;
	int	cd0;

	i = 0;
	cd0 = 0;
	while (i < idx)
	{
		if (str[i] != '0')
			cd0++;
		i++;
	}
	return (cd0);
}

char	*ft_copy_no0(char *str)
{
	int		i;
	int		j;
	int		idx;
	int		cd0;
	char	*text;

	j = 1;
	idx = 0;
	cd0 = 0;
	text = (char *)malloc(ft_strlen(str));
	while (j <= ft_strlen(str))
	{
		i = 0;
		cd0 = ft_conta0(str, j);
		if (cd0 != 0)
		{
			text[idx] = str[j - 1];
			idx++;
		}
		j++;
	}
	if (idx == 0)
		text[idx++] = '0';
	text[idx] = '\0';
	return (text);
}

char	*ft_validate(char *str)
{
	int		i;
	int		j;
	char	*temp;
	char	*copy;

	i = 0;
	j = 0;
	temp = (char *)malloc(ft_strlen(str));
	while (str[i] != '\0' && ft_is_whitespace(str[i]) == 1)
		i++;
	if (str[i] < '0' || str[i] > '9')
		return ("-");
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if ((str[i + 1] < '0' || str[i + 1] > '9') && str[i + 1] != '\0')
			return ("-");
		temp[j] = str[i];
		j++;
		i++;
	}
	temp[j] = '\0';
	copy = ft_copy_no0(temp);
	return (copy);
}
