/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 10:23:08 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/12 13:56:16 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i] != '\0')
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int		ft_ascii(char *str)
{
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		sum += str[i++];
	}
	return (sum);
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*swp;

	i = argc - 1;
	while (i > 1)
	{
		if ((ft_ascii(argv[i])) > ft_ascii(argv[i - 1]))
		{
			swp = argv[i];
			argv[i] = argv[i - 1];
			argv[i - 1] = swp;
			i = argc;
		}
		i--;
	}
	while(i < argc)
		ft_putstr(argv[i++]);

	return (0);
}