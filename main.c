/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes- <msimoes-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:37:43 by msimoes-          #+#    #+#             */
/*   Updated: 2022/09/28 15:27:21 by msimoes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (ac <= 1)
		free_msg(&a, 0);
	if (parsing(ac, av, &a))
		free_msg(&a, 1);
	set_index(&a);
	if (is_sorted(a, NULL))
		free_msg(&a, 0);
	if (ft_lstsize(a) == 2)
		sort_2(&a);
	else if (ft_lstsize(a) == 3)
		sort_3(&a);
	else if (ft_lstsize(a) == 4)
		sort_4(&a, &b);
	else if (ft_lstsize(a) == 5)
		sort_5(&a, &b);
	else
		radix_sort(&a, &b);
	free_msg(&a, 0);
}
