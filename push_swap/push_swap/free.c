/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <msimoes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:35:23 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/19 20:26:16 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_a(t_list **a)
{
    t_list *tmp;
    
    while(*a)
    {
        tmp = (*a);
        (*a) = (*a)->next;
        free(tmp);                        
    }           
}

void free_msg(t_list **a, char *str, int i)
{
    if (i)
        write(2, "Error", 5);
    if (*a)
        free_a(a);
    exit(i);
}
