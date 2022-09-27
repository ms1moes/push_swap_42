/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:01:00 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/27 12:04:19 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_min(t_list *a, int *n)
{ 
    while(a)
    {
        if(*n > a->index)
            *n = a->index;   
        a = a->next;
    }
}

void find_max(t_list *a, int *n)
{ 
    while(a)
    {
        if(*n < a->index)
            *n = a->index;   
        a = a->next;
    }
}

void find_min_max(t_list *a, int *max, int *min)
{
    find_max(a, min);
    find_min(a, max);
}

int find_max_bits(t_list *a)
{
    int max;
    int bits;

    bits = 0;
    max = INT_MIN;
    find_max(a, &max);
    while (max && ++bits)
        max >>= 1;
    return (bits);
}