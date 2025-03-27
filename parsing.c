/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserbest <aserbest@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 11:52:07 by aserbest          #+#    #+#             */
/*   Updated: 2025/03/27 13:04:55 by aserbest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

char	**ft_strjoin_2d(char **arr, char **split)
{
	char	**joined;
	int		i;
	int		j;

	i = ft_strlen_2d(arr);
	j = ft_strlen_2d(split);
	joined = ft_calloc(i + j + 1, sizeof(char *));
	if (!joined)
		return (NULL);
	i = 0;
	j = 0;
	while (arr[j])
		joined[i++] = ft_strdup(arr[j++]);
	j = 0;
	while (split[j])
		joined[i++] = ft_strdup(split[j++]);
	joined[i] = NULL;
	free_arr_2d(arr);
	return (joined);
}

char	**parse_args(char **argv)
{
	char	**arr;
	char	**split;
	int		i;

	arr = ft_calloc(2, sizeof(char *));
	if (!arr)
		return (NULL);
	i = 1;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split || ft_strlen_2d(split) == 0)
		{
			free_arr_2d(arr);
			return (free_arr_2d(split));
		}
		arr = ft_strjoin_2d(arr, split);
		free_arr_2d(split);
		if (!arr)
			return (free_arr_2d(split));
		i++;
	}
	return (arr);
}
