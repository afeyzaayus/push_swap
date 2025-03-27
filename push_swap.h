/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserbest <aserbest@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:46:25 by aserbest          #+#    #+#             */
/*   Updated: 2025/03/27 13:09:02 by aserbest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_stack
{
	int				data;
	unsigned long	tag;
	struct s_stack	*next;
}	t_stack;

int		check_arguments(char **argv);
char	**free_arr_2d(char **arr);
t_stack	*stack_a_init(char **arr, int len);
int		ft_strlen_2d(char **arr);
int		is_sorted(t_stack *stack);
t_stack	*free_stack(t_stack *head);
int		stack_size(t_stack *stack);
int		sa(t_stack **stack);
t_stack	*stack_min(t_stack *stack);
t_stack	*stack_add_front(t_stack **stack, t_stack *new);
int		rra(t_stack **stack_a);
int		ra(t_stack **stack_a);
int		pb(t_stack **a, t_stack **b);
int		pa(t_stack **a, t_stack **b);
int		sort(t_stack **head_a);
int		radix_sort(t_stack **a, t_stack **b);
long	ft_atol(const char *str);
void	assign_tag(t_stack **a);
void	assign_tag_zero(t_stack **a);
char	**parse_args(char **argv);
char	**ft_strjoin_2d(char **arr, char **split);

#endif