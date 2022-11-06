/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dilopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 10:58:05 by dilopez-          #+#    #+#             */
/*   Updated: 2022/06/02 10:44:35 by dilopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	ft_push_swap(t_list *stack_a, t_list *stack_b, char **argv)
{
	int	size;

	stack_a = ft_get_int_list(argv);
	if (ft_issorted(&stack_a) == 1)
		ft_exit_program(stack_a, 0, 0);
	ft_lst_index(&stack_a);
	size = ft_lstlen(stack_a);
	if (size == 3)
		ft_sort_3(&stack_a);
	else if (size == 5)
		ft_sort_5(&stack_a, &stack_b);
	else
		ft_algorithm(&stack_a, &stack_b, size);
	ft_exit_program(stack_a, stack_b, 0);
}

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = 0;
	stack_b = 0;
	if (argc == 1)
		return (0);
	if (argc > 1)
		ft_push_swap(stack_a, stack_b, argv + 1);
	return (0);
}
