/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:02:45 by jdanelon          #+#    #+#             */
/*   Updated: 2019/12/08 20:40:33 by ocarlos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_negative(int n, int num)
{
	if (n % 2 != 0)
		num *= (-1);
	return (num);
}

int	ft_is_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	num;

	i = 0;
	n = 0;
	num = 0;
	while (str[i] != '\0' && ft_is_whitespace(str[i]) == 1)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (-1);
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i + 1] == '.')
			return (-1);
		num = (num * 10) + str[i] - '0';
		i++;
	}
	return (ft_negative(n, num));
}
