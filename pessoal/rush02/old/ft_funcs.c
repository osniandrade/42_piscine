/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 19:52:30 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/08 20:39:08 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_printzero(char *buf, char *num, int pos);

int		ft_printnum1(char *buf, char *num, int pos);

int		ft_printnum2(char *buf, char *num, int pos);

int		ft_printnum3(char *buf, char *num, int pos);

int		ft_printmil(char *buf, int size);

int		ft_trio(char *buf, char *num, int j, int size);

int		ft_size1(char *buf, char *num, int j)
{
	if (num[j] == '0')
	{
		ft_printzero(buf, num, j);
	}
	ft_printnum1(buf, num, j++);
	return (1);
}

int		ft_size2(char *buf, char *num, int j)
{
	if (num[j] == '1')
	{
		ft_printnum2(buf, num, j);
	}
	else
	{
		ft_printnum3(buf, num, j);
		ft_printnum1(buf, num, j+1);
	}
	return (1);
}

int		ft_size3(char *buf, char *num, int j, int size)
{
	ft_printnum1(buf, num, j);
	ft_printmil(buf, size);
	return (1);
}

int		ft_trio(char *buf, char *num, int j, int size)
{
	while (num[j] == '0')
	{
		j++;
		size--;
	}
	if (size == 1)
	{
		ft_size1(buf, num, j);
	}
	if (size == 2)
	{
		ft_size2(buf, num, j);
	}
	if (size == 3)
	{
		if (num[j] != '0')
			ft_size3(buf, num, j++, size);
		if (num[j] != '0')
			ft_size2(buf, num, j++);
		else
			ft_size1(buf, num, ++j);
	}
	return (1);
}