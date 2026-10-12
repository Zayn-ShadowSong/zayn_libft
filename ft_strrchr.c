/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kythu <kythu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 19:05:13 by kythu             #+#    #+#             */
/*   Updated: 2026/09/27 13:54:24 by kythu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		slen;
	char	target;

	slen = 0;
	target = (char) c;
	while (s[slen])
		slen++;
	while (slen >= 0)
	{
		if (s[slen] == target)
			return ((char *) &s[slen]);
		slen--;
	}
	return (NULL);
}
