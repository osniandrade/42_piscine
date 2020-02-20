/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 11:26:58 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/05 14:07:26 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(int h)
{
	char	*dict;

	dict = "0123456789abcdef";
	if (h > 16)
	{
		ft_puthex(h / 16);
		ft_puthex(h % 16);
	}
	else
	{
		ft_putchar(dict[h]);
	}
}

int		ft_checkprint(char *str, int i)
{
	if (((unsigned char)str[i] > 31) && ((unsigned char)str[i] < 127))
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int		i;

	i = 0;
	while ((unsigned char)str[i] != '\0')
	{
		if (ft_checkprint(str, i))
			ft_putchar(str[i++]);
		else
		{
			ft_putchar('\\');
			if ((unsigned char)str[i] < 16)
				ft_putchar('0');
			ft_puthex((unsigned char)str[i++]);
		}
	}
}
