/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserbest <aserbest@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:33:19 by aserbest          #+#    #+#             */
/*   Updated: 2025/03/27 13:09:21 by aserbest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static int	is_valid_number(char *str)
{
	long	num;
	int		i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (!ft_isdigit(str[i]))
			return (0);
	}
	while (str[i] == '0')
		i++;
	if (ft_strlen(&str[i]) > 11)
		return (0);
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			i++;
		else
			return (0);
	}
	num = ft_atol(str);
	if (num > MAX_INT || num < MIN_INT)
		return (0);
	return (1);
}

int	has_same_number(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	control_arguments(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (!is_valid_number(arr[i]))
			return (0);
		i++;
	}
	if (has_same_number(arr))
		return (0);
	return (1);
}

int	check_arguments(char **argv)
{
	char	**arr;
	int		return_value;

	arr = parse_args(argv);
	if (!arr)
		return (0);
	return_value = control_arguments(arr);
	free_arr_2d(arr);
	return (return_value);
}
