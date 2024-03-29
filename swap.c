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
	t_list	*tmp;

	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	write(1, "sa\n", 3);
}

void	swap_b(t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	write(1, "sb\n", 3);
}

void	swap_both(t_list **a, t_list **b)
{
	swap_a(a);
	swap_b(b);
	write(1, "ss\n", 3);
}
