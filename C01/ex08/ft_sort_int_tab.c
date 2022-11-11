/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkanig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:42:33 by kkanig            #+#    #+#             */
/*   Updated: 2022/09/03 12:51:19 by kkanig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int uzunluk)
{
	int	dizi;
	int	temp;

	dizi = 0;
	while (dizi < (uzunluk - 1))
	{
		if (tab[dizi] > tab[dizi + 1])
		{
			temp = tab[dizi];
			tab[dizi] = tab[dizi + 1];
			tab[dizi + 1] = temp;
			dizi = -1;
		}
		dizi++;
	}
}
