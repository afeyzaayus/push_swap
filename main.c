/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserbest <aserbest@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:27:33 by aserbest          #+#    #+#             */
/*   Updated: 2025/03/27 11:59:35 by aserbest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "unistd.h"

static int	push_swap(char **argv)
{
	t_stack	*head;
	char	**arr;

	arr = parse_args(argv);
	if (!arr)
		return (0);
	head = stack_a_init(arr, ft_strlen_2d(arr));
	if (!head)
	{
		free_arr_2d(arr);
		return (0);
	}
	if (is_sorted(head))
	{
		free_arr_2d(arr);
		free_stack(head);
		return (1);
	}
	sort(&head);
	free_arr_2d(arr);
	free_stack(head);
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		return (0);
	if (!check_arguments(argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (!push_swap(argv))
		return (1);
	return (0);
}
