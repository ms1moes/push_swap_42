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

static long	ps_atoi(char **str)
{
	int			s;
	long long	n;

	s = 1;
	n = 0;
	while ((**str > 8 && **str < 14) || **str == 32)
		*str += 1;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			s *= -1;
		*str += 1;
	}
	while (**str >= '0' && **str <= '9')
	{
		n = n * 10 + s * (**str - '0');
		if (n < -2147483648 || n > 2147483647)
			return (2147483648);
		*str += 1;
	}
	while ((**str > 8 && **str < 14) || **str == 32)
		*str += 1;
	if (!(**str >= '0' && **str <= '9') && **str != '\0')
		return (2147483648);
	return (n);
}

static int	duplicate_checker(t_list **a)
{
    t_list	*previous;
	t_list	*following;

	previous = (*a);
	while (previous)
	{
		following = previous->next;
		while (following)
		{
			if (previous->info == following->info)
				return (1);
			following = following->next;
		}
		previous = previous->next;
	}
	return (0);
}

static void	new_node(t_list **a, int n)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		exit_prog(a, NULL, 1);
	new_node->content = n;
	new_node->index = 0;
	new_node->next = NULL;
	ft_lstadd_back(a, new_node);
	if (!a)
		exit_prog(a, NULL, 1);
}

void	parse_args(t_list **a, char **av)
{
	long long	n;
	int			i;

	i = 0;
	n = 0;
	
	while (av[++i])
	{
		if (av[i][0] == '\0')
			exit_free(a, NULL, 1);
		while (av[i][0])
		{
			n = ps_atoi(&av[i]);
			if (n > INT_MAX)
				exit_free(a, NULL, 1);
			if (duplicate_checker(a))
				exit_prog(a, NULL, 1);
			new_node(a, n);
		}
	}	
}