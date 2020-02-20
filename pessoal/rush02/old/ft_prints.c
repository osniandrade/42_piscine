/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 20:33:26 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/08 20:39:26 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_opendict(char *buf)
{
	int		fd;

	fd = open ("numbers.dict", O_RDONLY, 0600);
	if (fd == -1)
	{
		ft_putstr("Failed to open or read file.");
		return (0);
	}
	read (fd, buf, 9999);
	buf[9999] = '\0';
	close(fd);
	return (1);
}

void	ft_transpose(char *transp, char *num, int c, int lim)
{
	while (c < lim)
	{
		transp[c] = num[c];
		c++;
	}
}
