/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kythu <kythu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:59:17 by kythu             #+#    #+#             */
/*   Updated: 2026/10/04 18:23:02 by kythu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *s, char c)
{
	int	count;
	int	start_word;

	count = 0;
	start_word = 0;
	while (*s)
	{
		if (*s != c && start_word == 0)
		{
			start_word = 1;
			count++;
		}
		else if (*s == c)
			start_word = 0;
		s++;
	}
	return (count);
}

void	free_array(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

int	fill_array(char **arr, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			arr[i] = ft_substr(s, 0, len);
			if (!arr[i])
				return (free_array(arr, i -1), 0);
			i++;
			s += len;
		}
	}
	arr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof (char *) * (word_count(s, c) + 1));
	if (!arr)
		return (NULL);
	if (!fill_array(arr, s, c))
		return (NULL);
	return (arr);
}
