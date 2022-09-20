/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 06:18:33 by msimoes-          #+#    #+#             */
/*   Updated: 2022/07/09 06:18:33 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	duplicate_checker(t_list *a, int n)
{
	while (a)
	{
		if (a->info == n)
			return (1);
		a = a->next;
	}
	return (0);
}

int atoi(const char *str)
{
	long long	number;
	int			signal;
	int			i;

	number = 0;
	signal = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
				signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + signal * (str[i] - 48);
		i++;
		if (number > 2147483647)
			return (-1);
		if (number < -2147483648)
			return (0);
	}
	return (number);
}

t_list *create_node(int n)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->info = n;
	node->next = NULL;
	return node;
}

int parsing(char **av, t_list **a)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while(av[++i])
	{
		n = atoi(av[i]);
		if(duplicate_checker(*a, n) == 1)
			return(-1);
		ft_lstadd_back(a, create_node(n));
		if (!*a)
			return (-1);
	}
	return (0);
}