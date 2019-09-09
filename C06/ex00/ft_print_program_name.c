/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-houe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:00:51 by mle-houe          #+#    #+#             */
/*   Updated: 2019/09/09 10:44:03 by mle-houe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}


int main(int arc, char **argv)
{
	(void) arc;
	(void) argv;

	ft_putstr(argv[0]);
	return (0);
}
