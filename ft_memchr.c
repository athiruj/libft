/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:57:53 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 16:06:29 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*tstr;

	if (!n)
		return (NULL);
	tstr = (char *)str;
	while (*tstr != c && --n)
		tstr++;
	if (*tstr != c)
		return (NULL);
	return (tstr);
}
