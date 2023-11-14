/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:45:42 by agerbaud          #+#    #+#             */
/*   Updated: 2023/11/14 09:28:54 by agerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocation;
	size_t	i;

	i = nmemb * size;
	if (i < nmemb || i < size)
		return (NULL);
	allocation = (void *)malloc(i);
	if (!allocation)
		return (NULL);
	return (ft_bzero(allocation, i));
}
