/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 02:22:42 by msimoes-          #+#    #+#             */
/*   Updated: 2022/07/01 02:22:42 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
ra = top number goes to bottom of stack A
rb = top number goes to bottom of stack B
rr = ra + rb
*/

void	rotate_a(t_list **a)
{
	t_list	*tmp;

    tmp = *a;
    (*a) = (*a)->next;
    ft_lstadd_back(a, tmp);
    tmp->next = NULL;
    write(1, "ra\n", 3);
}

void	rotate_b(t_list **b)
{
   t_list	*tmp;

    tmp = *b;
    *b = (*b)->next;
    ft_lstadd_back(b, tmp);
    tmp->next = NULL;
    write(1, "rb\n", 3);

}

void rotate_both(t_list **a, t_list **b)
{
    rotate_a(a);
    rotate_b(b);
    write(1, "rr\n", 3);
}