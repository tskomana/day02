/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tskomana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 16:17:58 by tskomana          #+#    #+#             */
/*   Updated: 2020/07/10 16:46:39 by tskomana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_combo(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '0';
	k = '0';

	while(i < 9)
	{
		while(j < 9)
		{
			while(k < 9)
			{
				k++;
			}
			k = '0';
			j++;
			
		}
		j = '0';
		i++;
	}
	i = '0';



	

}
int		main()
{
	ft_print_combo();
	ft_putchar('\n');
}
