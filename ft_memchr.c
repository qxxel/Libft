/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:31:53 by agerbaud          #+#    #+#             */
/*   Updated: 2023/11/07 16:58:17 by agerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_tmp;

	if (n == 0)
		return (NULL);
	s_tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_tmp[i] == c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
