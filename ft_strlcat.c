/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:41:17 by agerbaud          #+#    #+#             */
/*   Updated: 2023/11/07 16:59:53 by agerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	while ((i < size - 1) && src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (i + j - 1);
}
