/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kythu <kythu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:48:24 by kythu             #+#    #+#             */
/*   Updated: 2026/09/27 13:54:51 by kythu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	target;

	target = (char) c;
	while (*s != '\0')
	{
		if (*s == target)
			return ((char *) s);
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (NULL);
}
