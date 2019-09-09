/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-houe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:42:45 by mle-houe          #+#    #+#             */
/*   Updated: 2019/09/09 12:45:10 by mle-houe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char txt)
{
	write(1, &txt, 1);
}

void ft_putstr(char *txt)
{
	int i;

	i = 0;
	while(txt[i])
	{
		ft_putchar(txt[i]);
		i++;
	}
	ft_putchar('\n');
}



int main(int ac, char **av)
{
	(void) ac;
	(void) av;
	int i;

	i = 1;

	while(av[i])
		i++;

	while(i != 1)
		ft_putstr(av[--i]);
}
