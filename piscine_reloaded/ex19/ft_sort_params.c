/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:32:10 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/09 20:20:28 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_params(char argc, char **argv);

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}

void	ft_sort_params(char argc, char **argv)
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

int	ft_strcmp(char *s1, char *s2)
{
	int	diference;

	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	diference = *s1 - *s2;
	return (diference);
}