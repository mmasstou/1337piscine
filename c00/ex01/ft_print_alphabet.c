/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmasstou <mmasstou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:37:52 by mmasstou          #+#    #+#             */
/*   Updated: 2021/06/24 12:57:47 by mmasstou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_alphabet(void)
{
	char	x ;

	x = 97 ;
	while (x <= 122 )
	{
		write(1, &x, 1);
		x++;
	}
}
