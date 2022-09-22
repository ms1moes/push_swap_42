/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:37:43 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/22 11:41:12 by msimoes-         ###   ########.fr       */
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
    if(is_sorted(a, NULL))
        free_msg(&a, 0);
    if (ac == 3)
		swap_a(&a);
	if (ac == 4)
		sort_3(&a);
    if (ac == 5)
        sort_4(&a, &b);
    if (ac == 6)
        sort_5(&a, &b);
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
