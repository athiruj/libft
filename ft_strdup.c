/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:02:09 by athi              #+#    #+#             */
/*   Updated: 2024/09/01 22:01:48 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	char	*tdst;

	tdst = dst;
	while (*src)
		*tdst++ = *src++;
	*tdst = '\0';
	return (dst);
}

char	*ft_strdup(const char *src)
{
	char	*dst;

	dst = (char *) malloc(ft_strlen(src) + 1);
	if (!dst)
		return (NULL);
	ft_strcpy(dst, src);
	return (dst);
}
