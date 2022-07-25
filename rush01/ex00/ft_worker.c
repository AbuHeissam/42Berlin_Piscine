/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_worker.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhassoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 17:05:43 by fhassoun          #+#    #+#             */
/*   Updated: 2022/07/02 17:19:27 by fhassoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_worker(int *com, int game[4][4])
{
	int i;
	i = 0;
	while ( com[i]  != '\0')
	{
		/*check col*up */
		if (i >= 0 && i < 4 && com[i] == 4 )
		{
			game[0][i] = 1;
			game[1][i] = 2;
			game[2][i] = 3;
			game[3][i] = 4;
		}
		if (i >= 0 && i < 4 && com[i] == 1 )
		{
			game[0][i] = 4;
			if (com[i]== 1 && com[i+4]== 2)
				game[3][i] = 3;
			if (com[i]== 1 && com[i+4]== 3)
				game[2][i] = 3;
			
		}
		if (i >= 0 && i < 4 && com[i] == 2 )
		{
			if ( com[i] == 2 && com[i+4] == 3)
			{
				game[1][i] = 4;
			}


		}







		/*check col*down */
		if (i >3 && i <8 && com[i] == 4  )
		{
			game[3][i-4] = 1;
			game[2][i-4] = 2;
			game[1][i-4] = 3;
			game[0][i-4] = 4;
		}
		if (i >3 && i <8 && com[i] == 1)
		{	
			game[3][i-4] = 4; // maybe wrong
			if (com[i]== 1 && com[i-4]== 2)
				game[0][i-4] = 3;
			if (com[i]== 1 && com[i-4]== 3)
				game[1][i-4] = 3;
		}

		if (i > 3 && i < 8 && com[i] == 2 )
		{
			if ( com[i] == 2 && com[i-4] == 3)
			{
				game[1][i] = 4;
			}
		}






		/*check row*left */
		if (i > 7 && i < 12 && com[i] == 4 )
		{
				game[i-8][0] = 1;
				game[i-8][1] = 2;
                game[i-8][2] = 3;
                game[i-8][3] = 4;
            }
            if (i > 7 && i < 12 && com[i] == 1)
			{
                game[i-8][0] = 4;
				if (com[i]== 1 && com[i+4]== 2)
				game[i-8][3] = 3;
				//if (com[i]== 1 && com[i+4]== 3)
				//game[i-8][2] = 5;
			}
	
        
		if (i > 7 && i < 12 && com[i] == 2 )
		{
			//if ( com[i] == 2 && com[i+4] == 3)
			if ( com[i] == 3 && com[i+4] == 2)
			{
				game[i-8][2] = 4;
				if (game[i-8][3] == 1 || game[i-8][0] == 2)
					{
						game[i-8][0] = 2;
						game[i-8][1] = 3;
						game[i-8][2] = 4;
						game[i-8][3] = 1;
					}
			}
		}












        /*check row*right*/
            if (i > 11 && i < 16 && com[i] == 4  )
            {                               
                game[i-12][3] = 1;
                game[i-12][2] = 2;
                game[i-12][1] = 3;
                game[i-12][0] = 4;
            }
            if (i > 11 && i < 16 && com[i] == 1)
			{
                game[i-12][3] = 4;
				if (com[i]== 1 && com[i-4]== 2)
				game[i-12][0] = 3;
			}

			if (i > 11 && i < 16 && com[i] == 2 )
		{
			if ( com[i] == 2 && com[i-4] == 3)
			{
				game[i-12][2] = 4;
			}
		}



        i++;
    }








}
