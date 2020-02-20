/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 10:17:28 by ocarlos-          #+#    #+#             */
/*   Updated: 2019/12/12 10:19:32 by ocarlos-         ###   ########.fr       */
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

int		main(int argc, char *argv[])
{
	int		i;

	i = argc - 1;
	while (i > 0)
		ft_putstr(argv[i--]);
	return (0);
}