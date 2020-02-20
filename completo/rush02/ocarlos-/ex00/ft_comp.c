/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:48:26 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/08 21:30:45 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_printzero(char *buf, char *num, int pos)
{
	int		i;

	i = 0;
	while (buf[i] != '\0')
	{
		if ((buf[i] == ':') && (buf[i - 1] == '0'))
		{
			if (buf[i - 1] == num[pos])
			{
				i += 2;
				while (buf[i] != '\n')
					ft_putchar(buf[i++]);
				ft_putchar('\n');
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		ft_printnum1(char *buf, char *num, int pos)
{
	int		i;

	i = 0;
	while (buf[i] != '\0')
	{
		if ((buf[i] == ':') && (buf[i - 2] == '\n'))
		{
			if (buf[i - 1] == num[pos])
			{
				i += 2;
				while (buf[i] != '\n')
					ft_putchar(buf[i++]);
				ft_putchar(' ');
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		ft_printnum2(char *buf, char *num, int pos)
{
	int		i;

	i = 0;
	while (buf[i] != '\0')
	{
		if ((buf[i] == ':') && (buf[i - 3] == '\n'))
		{
			if ((buf[i - 2] == num[pos])
				&& (buf[i - 1] == num[pos + 1]))
			{
				i += 2;
				while (buf[i] != '\n')
					ft_putchar(buf[i++]);
				ft_putchar(' ');
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		ft_printnum3(char *buf, char *num, int pos)
{
	int		i;

	i = 0;
	while (buf[i] != '\0')
	{
		if ((buf[i] == ':') && (buf[i - 3] == '\n'))
		{
			if (buf[i - 2] == num[pos])
			{
				i += 2;
				while (buf[i] != '\n')
					ft_putchar(buf[i++]);
				ft_putchar(' ');
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		ft_printmil(char *buf, int size)
{
	int trip;
	int	i;

	i = 0;
	trip = size / 3;
	while (buf[i] != '\0')
	{
		if ((buf[i] == ':') && (buf[i - (1 + (trip * 3))] == '\n')
			&& ((size % 3) == 0))
			if ((buf[i - 3] == '1') || (buf[i - 1] == '0'))
			{
				i += 2;
				while (buf[i] != '\n')
					ft_putchar(buf[i++]);
				ft_putchar(' ');
				return (1);
			}
		if ((buf[i] == ':') && (buf[i - (2 + (trip * 3))] == '\n'))
			if ((buf[i - 3] == '1') || (buf[i - 1] == '0'))
			{
				i += 2;
				while (buf[i] != '\n')
					ft_putchar(buf[i++]);
				ft_putchar(' ');
				return (1);
			}
		i++;
	}
	return (0);
}
