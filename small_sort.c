/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <msimoes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:37:43 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/23 17:46:41 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(t_list **a)
{
    int min;
    int n[3];
    
    n[0] = (*a)->index;
    n[1] = (*a)->next->index;
    n[2] = (*a)->next->next->index;
    min = INT_MAX;
    find_min(*a, &min);
    if(n[0] == min || (n[2] == min && n[1] > n[0]))
        revrotate_a(a);
    if((n[0] > n[1] && n[0] > n[2]))
        rotate_a(a);
    if(!is_sorted(*a, NULL))
        swap_a(a);
}

void sort_4(t_list **a, t_list **b)
{
    int min;
    int max;

    min = INT_MAX;
    max = INT_MIN;
    find_min_max(*a, &min, &max);
    while ((*a)->index != min && (*a)->index != max)
        rotate_a(a);
    push_b(a, b);
    sort_3(a);
    push_a(a, b);
}

void sort_5(t_list **a, t_list **b)
{
    int min;
    int max;

    min = INT_MAX;
    max = INT_MIN;
    find_min_max(*a, &min, &max);
   while ((*a)->index != max && (*a)->index != min)
        rotate_a(a);
    push_b(a, b);
    while ((*a)->index != min && (*a)->index != max)
        rotate_a(a);
    push_b(a, b);
    sort_3(a);
    if((*b)->index > (*b)->next->index)
        swap_b(b);
    push_a(a, b);
    push_a(a, b);
    rotate_a(a);
}
