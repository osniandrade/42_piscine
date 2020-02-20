/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 20:39:54 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/08 20:40:07 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_opendict(char *buf);

int		ft_printmil(char *buf, int size);

int		ft_trio(char *buf, char *num, int j, int size);

void	ft_transpose(char *transp, char *num, int c, int lim);

void	ft_pronounce(char *num)
{
	int		j;
	int		c;
	int		size;
	int		trip;
	int		head;
	char	num[] = "3465251";
	char	transp[3];
	char	buf[700];


	j = 0;
	c = 0;
	ft_opendict(buf);
	while (num[j] != '\0')
		j++;
	size = j;
	trip = size / 3;
	head = size % 3;
	j = 0;
	if (head != 0)
	{
		ft_transpose(transp, num, c, head);
		ft_trio(buf, transp, j, head);
		ft_printmil(buf, size);
	}
	while (trip != 0)
	{
		c = 0;
		while (c < 3)
		{
			transp[c] = num[c + head + j];
			c++;
		}
		ft_trio(buf, transp, 0, c);
		if (((trip > 1) && (head == 0)) || ((head != 0) && (trip > 1)))
			ft_printmil(buf, size-trip);
		trip--;
		j += 3;
	}
}
