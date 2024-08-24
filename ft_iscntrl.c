/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athi <athi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:56:02 by athi              #+#    #+#             */
/*   Updated: 2024/08/24 13:56:03 by athi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_iscntrl(const char c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (False);
	return (True);
}
