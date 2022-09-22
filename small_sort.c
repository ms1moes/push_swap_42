/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:37:43 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/22 07:16:18 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(t_list **a)
{
    int min;
    int n[3];
    
    n[0] = (*a)->info;
    n[1] = (*a)->next->info;
    n[2] = (*a)->next->next->info;
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
    
    min = INT_MAX;
    find_min(*a, &min);
    while ((*a)->info != min)
        rotate_a(a);
    push_b(a, b);
    sort_3(a);
    push_a(a, b);
}

void sort_5(t_list **a, t_list **b)
{
    int min;
    
    min = INT_MAX;
    find_min(*a, &min);
    while ((*a)->info != min)
        rotate_a(a);
    push_b(a, b);
    min = INT_MAX;
    find_min(*a, &min);
    while ((*a)->info != min)
        rotate_a(a);
    push_b(a, b);
    sort_3(a);
    push_a(a, b);
    push_a(a, b);
}
