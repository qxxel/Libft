/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:57:46 by agerbaud          #+#    #+#             */
/*   Updated: 2023/11/13 13:27:23 by agerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (s[0] != 0 || (unsigned char)c == 0)
	{
		if (s[0] == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
