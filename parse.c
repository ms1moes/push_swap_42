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

int atoi_helper(char *str)
{
	int i;
	int j;

	i = -1;
	j = 0;
	if (str[0] == '\0')
		return (1);
	while (str[++i])
	{
		if (str[i] == '-' || str[i] == '+')
			j++;
		if ((str[i] >= 'a' && str[i] <= 'z') &&
		 (str[i] >= 'A' && str[i] <= 'Z')) 
				return (1);
		if(j > 1)
			return (1);
	}
	return (0);
}

long ft_atoi(char *str)
{
	long long	n;
	int			sig;
	int			i;

	n = 0;
	sig = 1;
	i = 0;

	if (str[i] == '-' || str[i] == '+')
	{
		sig = (str[i] != '-') - (str[i] == '-');
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + sig * (str[i++] - '0');
		if (n > INT_MAX || n < INT_MIN)
			return (2147483648);	
	}
	return (n);
}

t_list *create_node(int n)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->info = n;
	node->index = 0;
	node->next = NULL;
	return node;
}

int parsing(char **av, t_list **a)
{
	int i;
	long long n;

	n = 0;
	i = 0;
	while(av[++i])
	{
		if (atoi_helper(av[i]))
			free_msg(a, 1);
		n = ft_atoi(av[i]);
		if (n > INT_MAX)
			free_msg(a, 1);
		if(duplicate_checker(*a, n) == 1)
			free_msg(a, 1);
		ft_lstadd_back(a, create_node(n));
		if (!*a)
			free_msg(a, 1);
	}
	return (0);
}