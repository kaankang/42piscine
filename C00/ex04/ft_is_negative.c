/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:34:54 by kkanig            #+#    #+#             */
/*   Updated: 2022/08/29 15:42:39 by kkanig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	positive;	
	char	negative;

		positive = 'P';
		negative = 'N';
	if (n >= 0)
	{
		write (1, &positive, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}

/*int	main()
{
	ft_is_negative(3);
	return (0);
}*/
