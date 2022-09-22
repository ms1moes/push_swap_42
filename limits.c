/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   limits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:01:00 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/21 04:59:36 by msimoes-         ###   ########.fr       */
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
