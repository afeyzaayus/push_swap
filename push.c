/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserbest <aserbest@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:27:16 by aserbest          #+#    #+#             */
/*   Updated: 2025/03/23 17:09:34 by aserbest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "unistd.h"

t_stack	*push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	if (!(*src) || !src)
		return (NULL);
	temp = (*src);
	*src = (*src)->next;
	return (stack_add_front(dest, temp));
}

int	pb(t_stack **a, t_stack **b)
{
	if (push(a, b))
	{
		write(1, "pb\n", 3);
		return (1);
	}
	return (0);
}

int	pa(t_stack **a, t_stack **b)
{
	if (push(b, a))
	{
		write(1, "pa\n", 3);
		return (1);
	}
	return (0);
}
