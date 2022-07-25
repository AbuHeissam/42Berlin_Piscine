/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisserst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 10:36:28 by jisserst          #+#    #+#             */
/*   Updated: 2022/06/25 13:05:53 by jisserst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	hx;
	int	hy;

	hy = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (hy <= y)
	{
		hx = 1;
		while (hx <= x)
		{	
			if ((hx == x && hy == y && x != 1 && y != 1)
				|| (hx == 1 && hy == 1))
				ft_putchar('/');
			else if ((hx == x && hy == 1) || (hx == 1 && hy == y))
				ft_putchar('\\');
			else if ((hx > 1 && hx < x) && (hy > 1 && hy < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			hx++;
		}
		ft_putchar('\n');
		hy++;
	}
}
