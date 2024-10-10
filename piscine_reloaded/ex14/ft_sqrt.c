/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:06:49 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/09 19:06:53 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	sub_number;
	int	counter;

	sub_number = 1;
	counter = 0;
	while ((nb - sub_number) >= 0)
	{
		nb -= sub_number;
		counter++;
		sub_number += 2;
	}
	if (nb > 0)
		return (0);
	return (counter);
}
