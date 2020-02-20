/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 07:08:21 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/11 15:12:16 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>


char	g_map[999][999];
int		g_nmap[999][999];
int		g_lines;
char	g_blchar;
char	g_frchar;
char	g_sqchar;

int		ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
	ft_putchar('\n');
}

void	ft_getchars(char *map)
{
	int		i;

	i = 0;
	g_lines = ft_atoi(map);
	while ((map[i] >= '0') && (map[i] <= '9'))
		i++;
	g_frchar = map[i++];
	g_blchar = map[i++];
	g_sqchar = map[i++];
}

void	ft_readmap(char *map)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	ft_getchars(map);
	while (map[k-1] != '\n')
		k++;
	while (i < g_lines)
	{
		while (map[k] != '\n')
		{
			g_map[i][j] = map[k];
			j++;
			k++;
		}
		j = 0;
		i++;
		k++;
	}
}

int		ft_opendict(char *file)
{
	int		fd;
	char	map[9999];

	fd = open(file, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	read(fd, map, 9999);
	ft_readmap(map);
	close(fd);
	return (1);
}

void	ft_flipnbr(void)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < g_lines)
	{
		while (g_map[i][j] != '\0')
		{
			if (g_map[i][j] == g_frchar)
				g_nmap[i][j] = 0;
			if (g_map[i][j] == g_blchar)
				g_nmap[i][j] = 1;
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_printnb(void)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < g_lines)
	{
		while (g_map[i][j])
		{
			printf("%d", g_nmap[i][j]);
			j++;
		}
		j = 0;
		i++;
		printf("\n");
	}
}

int		main(int argc, char *argv[])
{
	int		i = 0;
	char	*file;
	int		args;

	args = argc;
	file = argv[1];
	if (!ft_opendict(file))
		ft_putstr("Error opening file.");
	while (i <= g_lines)
		ft_putstr(g_map[i++]);
	ft_printnb();
	return (0);
}