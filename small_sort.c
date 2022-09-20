/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <msimoes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:37:43 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/20 18:49:20 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_2(t_list **a)
{
    if((*a)->info > (*a)->next->info)
        swap_a(a);
}

void sort_3(t_list **a)
{
    int min;
    int n[3];
    
    n[0] = (*a)->info;
    n[1] = (*a)->next->info;
    n[2] = (*a)->next->next->info;
    min = INT_MAX;
    find_min(*a, min);
    if((n[2] == min && n[1] > n[0]) || n[0] == min)
        revrotate_a(a);
    if((n[0] > n[1] || n[0] > n[2]))
        rotate_a(a);
    if(!is_sorted(*a, NULL))
        swap_a(a);
}
