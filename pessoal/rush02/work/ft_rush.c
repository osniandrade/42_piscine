/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 20:39:54 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/08 21:25:56 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_trip;
int		g_size;
int		g_c;
char	g_transp[3];
char	g_buf[700];

int		ft_opendict(char *buf);

int		ft_printmil(char *buf, int size);

int		ft_trio(char *buf, char *num, int j, int size);

void	ft_transpose(char *transp, char *num, int c, int lim);

void	ft_while(char *num, int j)
{
	while (g_trip != 0)
	{
		g_c = -1;
		while (g_c++ < 3)
			g_transp[g_c] = num[g_c + (g_size % 3) + j];
		ft_trio(g_buf, g_transp, 0, g_c);
		if (((g_trip > 1) && ((g_size % 3) == 0))
			|| (((g_size % 3) != 0) && (g_trip > 1)))
			ft_printmil(g_buf, g_size - g_trip);
		g_trip--;
		j += 3;
	}
}

void	ft_pronounce(char *num)
{
	int		j;

	j = 0;
	g_c = 0;
	ft_opendict(g_buf);
	while (num[j] != '\0')
		j++;
	g_size = j;
	g_trip = (g_size / 3);
	j = 0;
	if ((g_size % 3) != 0)
	{
		ft_transpose(g_transp, num, g_c, (g_size % 3));
		ft_trio(g_buf, g_transp, j, (g_size % 3));
		ft_printmil(g_buf, g_size);
	}
	ft_while(num, j);
}
