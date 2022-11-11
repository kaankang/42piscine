/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:36:48 by kkanig            #+#    #+#             */
/*   Updated: 2022/09/14 15:40:37 by kkanig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		ft_putchar(av[i][j]);
		j++;
		if (av[i][j] == '\0')
		{
			ft_putchar('\n');
			i++;
			j = 0;
		}
	}
	return (0);
}
