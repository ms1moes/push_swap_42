/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 02:34:10 by msimoes-          #+#    #+#             */
/*   Updated: 2022/07/01 02:34:10 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
pa = top of B goes to top of A
pb = top of A goes to top of B
*/

void    push_b(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*a)->next;
    (*a)->next = (*b);
    (*b) = (*a);
    (*a) = tmp;
	write(1, "pb\n", 3);
}

void push_a(t_list **a, t_list **b)
{
    t_list	*tmp;

    tmp = (*b)->next;
    (*b)->next = *a;
    *a = *b;
    *b = tmp;
	write(1, "pa\n", 3);
}
