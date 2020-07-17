/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tslephal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:41:50 by tslephal          #+#    #+#             */
/*   Updated: 2020/07/17 08:43:09 by tslephal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void    Rush00(int columns, int rows)
{
    int count;
    int column;
    int row;
    
    row = 0;
    count = 0;
    column = columns - 1;
    while (row < rows)
    {
        if(row == 0 || row == rows-1)
        {
            if (count == 0)
            {
                ft_putchar('o');
                count++;
            }
        
            if (count != 0 && count != column)
            {
                ft_putchar('-');
                count++;
            }
        
            if (count == column)
            {
                ft_putchar('o');
                ft_putchar('\n');
                count = 0;
                row++;
            }
        }
       
        else
        {
            if (count == 0)
            {
                ft_putchar('|');
                count++;
            }
            
            if (count != 0 && count != column)
            {
                ft_putchar(' ');
                count++;
            }
            
            if (count == column)
            {
                ft_putchar('|');
                ft_putchar('\n');
                count = 0;
                row++;
            }
        }
    }
}
