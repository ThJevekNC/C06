/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-houe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:16:20 by mle-houe          #+#    #+#             */
/*   Updated: 2019/09/09 18:32:35 by mle-houe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *src)
{
	int i;

	i = -1;
	while(src[++i])
		;
	write(1, src, i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int 		 bool;
	unsigned int i;

	i = 0;
	
	while(s1[i] || s2[i])
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int 	i;
	int 	j;
	char	 *temp;

	i = 0;
	while(i++ + 1 < ac)
	{
		j = i -1;
		while(j++ + 1 < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp;
			}
		}
		ft_putstr(av[i]);
		ft_putstr("\n");
	}
	return (0);
}
