/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:32:10 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/09 19:16:55 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char argc, char **argv);

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	ft_print_params(argc, argv);
	return (0);
}

void	ft_print_params(char argc, char **argv)
{
	int	param;
	int	count;	

	param = 1;
	count = 0;
	while (param < argc)
	{
		if (argc == 1)
			break;
		while (argv[param][count] != '\0')
		{
			ft_putchar(argv[param][count]);
			count++;
		}
		ft_putchar('\n');
		count = 0;
		param++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
