/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 02:48:30 by msimoes-          #+#    #+#             */
/*   Updated: 2022/06/28 02:48:30 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
sa = swap top two numbers in stack A
sb = swap top two numbers in stack B
ss = sa + sb 
*/

void	swap_a(t_list **a)
{
	int	tmp;

	tmp = (*a)->info;
	(*a)->info = (*a)->next->info;
	(*a)->next->info = tmp;
	write(1, "sa\n", 3);
}

void	swap_b(t_list **b)
{
	int	tmp;

	tmp = (*b)->info;
	(*b)->info = (*b)->next->info;
	(*b)->next->info = tmp;
	write(1, "sb\n", 3);
}

void	swap_both(t_list **a, t_list **b)
{
	swap_a(a);
	swap_b(b);
	write(1, "ss\n", 3);
}
