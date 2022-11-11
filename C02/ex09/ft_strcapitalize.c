/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 04:41:02 by kkanig            #+#    #+#             */
/*   Updated: 2022/09/09 16:34:06 by kkanig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	control;

	i = 0;
	control = 1;
	while (str[i] != '\0')
	{
		if (control == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (control == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A'))
			control = 1;
		else if ((str[i] > 'Z' && str[i] < 'a') || str[i] > 122)
			control = 1;
		else
			control = 0;
		i++;
	}
	return (str);
}
