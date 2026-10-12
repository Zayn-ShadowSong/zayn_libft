/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kythu <kythu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 14:31:51 by kythu             #+#    #+#             */
/*   Updated: 2026/09/27 16:33:27 by kythu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*d;
	unsigned char		k;

	d = (const unsigned char *)s;
	k = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (d[i] == k)
			return ((void *)&d[i]);
		i++;
	}
	return (NULL);
}
