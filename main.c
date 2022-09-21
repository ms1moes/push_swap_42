/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <msimoes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:37:43 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/20 18:47:03 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_list *a;
    t_list *b;

    a = NULL;
    b = NULL;
    
    if (ac <= 1)
        free_msg(&a, 1);
    if (parsing(av, &a))
        free_msg(&a, 1);
    b = a;
    printf("------Stack A------\n");
    while (b)
    {
        printf("%i\n", b->info);
        b = b->next;
    }
    printf("------Fim Stack A------\n");
    if(is_sorted(a, NULL))
        free_msg(&a, 0);
    sort_3(&a);
    b = a;
    printf("------Stack A------\n");
    while (b)
    {
        printf("%i\n", b->info);
        b = b->next;
    }
    printf("------Fim Stack A------\n");
    free_msg(&a, 0);
}
