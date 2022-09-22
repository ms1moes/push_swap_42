/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:01:00 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/22 10:09:08 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_min(t_list *a, int *n)
{ 
    while(a)
        {
         if(*n > a->info)
            *n = a->info;   
        a = a->next;
        }
}

void find_max(t_list *a, int *n)
{ 
    while(a)
        {
         if(*n < a->info)
            *n = a->info;   
        a = a->next;
        }
}

void find_min_max(t_list *a, int *max, int *min)
{
    find_max(a, min);
    find_min(a, max);
}

void find_max_bits(t_list *a, int *max_bits)
{
    int max;
    int min;
    int bits;

    bits = 0;
    min = INT_MAX;
    max = INT_MIN;
    find_min_max(a, &max, &min);
    while (max)
    {
        max = max >> 1;
        bits++;
    }
    *max_bits = bits;
}
