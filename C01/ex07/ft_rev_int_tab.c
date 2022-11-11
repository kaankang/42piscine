/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:02:07 by kkanig            #+#    #+#             */
/*   Updated: 2022/09/03 13:17:13 by kkanig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int uzunluk)
{
	int	i;
	int	ri;
	int	temp;

	i = 0;
	ri = uzunluk - 1;
	while (i < (uzunluk / 2))
	{
		temp = tab[i];
		tab[i] = tab[ri];
		tab[ri] = temp;
		i++;
		ri--;
	}
}
