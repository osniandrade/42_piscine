/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdanelon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 10:16:41 by jdanelon          #+#    #+#             */
/*   Updated: 2019/12/08 20:07:01 by jdanelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char	*ft_validate(char *str);

void	ft_pronounce(char *num);

int		main(int argc, char **argv)
{
	int		i;
	char	*text;

	i = 1;
	if (argc == 1)
		ft_putstr("Error\n");
	else
	{
		while (i < argc)
		{
			text = ft_validate(argv[i]);
			if (text[0] == '-')
				ft_putstr("Error\n");
			else
				ft_pronounce(text);
			i++;
		}
	}
	return (0);
}
