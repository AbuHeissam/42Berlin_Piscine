/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:05:43 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/03 17:46:10 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_filler(int *com, int game[4][4])
{
	int	i;

	i = 0;
	while (com[i] != '\0')
	{
		/*check col*up 
			 check 3 - 1 */
		if (i >= 0 && i < 4 && com[i] == 3)
		{
			if (game[0][i - 3] == 1 || game[0][i] == 2)
			{
				game[0][i] = 2;
				game[1][i] = 3;
				game[2][i] = 4;
				game[3][i] = 1;
			}		
		}
			/* check 2 - 2 */
		if (i >= 0 && i < 4 && com[i] == 2)
		{
			if (game[0][i] == 3)
			{
				game[0][i] = 3;
				game[1][i] = 4;
				game[2][i] = 1;
				game[3][i] = 2;
			}
			if (game[0][i] == 1)
			{
				game[0][i] = 1;
				game[1][i] = 4;
				game[2][i] = 3;
				game[3][i] = 2;
			}
			if (game[0][i] == 2)
			{
				game[0][i] = 2;
				game[1][i] = 4;
				game[2][i] = 1;
				game[3][i] = 3;
			}
		}
		/*check col*down */
			/* check 3 - 1 */
		/* TODO
		if (i >3 && i <8 && com[i] == 3  )
				{

				if (game[0][i-3] == 1 || game[0][i] == 2)
					{
						game[0][i-4] = 2;
						game[1][i-4] = 3;
						game[2][i-4] = 4;
						game[3][i-4] = 1;
					}
		} */
		/*check row*left */
		if (i > 7 && i < 12 && com[i] == 3)
		{
			if (game[i - 8][3] == 1 || game[i - 8][0] == 2)
			{
				game[i - 8][0] = 2;
				game[i - 8][1] = 3;
				game[i - 8][2] = 4;
				game[i - 8][3] = 1;
			}
		}
			/* check 2 - 2 */
		if (i > 7 && i < 12 && com[i] == 2)
		{
			if (game[i - 8][0] == 3)
			{
				game[i - 8][0] = 3;
				game[i - 8][1] = 4;
				game[i - 8][2] = 1;
				game[i - 8][3] = 2;
			}
			if (game[i - 8][0] == 1)
			{
				game[i - 8][0] = 1;
				game[i - 8][1] = 4;
				game[i - 8][2] = 3;
				game[i - 8][3] = 2;
			}
			if (game[i - 8][0] == 2)
			{
				game[i - 8][0] = 2;
				game[i - 8][1] = 4;
				game[i - 8][2] = 1;
				game[i - 8][3] = 3;
			}
		}
			/*check row*right*/
		if (i > 11 && i < 16 && com[i] == 2)
		{
			if (game[i - 12][0] == 3)
			{
				game[i - 12][0] = 3;
				game[i - 12][1] = 4;
				game[i - 12][2] = 1;
				game[i - 12][3] = 2;
			}
			if (game[i - 8][0] == 1)
			{
				game[i - 12][0] = 1;
				game[i - 12][1] = 4;
				game[i - 12][2] = 3;
				game[i - 12][3] = 2;
			}
			if (game[i - 8][0] == 2)
			{
				game[i - 12][0] = 2;
				game[i - 12][1] = 4;
				game[i - 12][2] = 1;
				game[i - 12][3] = 3;
			}
		}
	i++;
	}
}
