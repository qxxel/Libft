/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerbaud <agerbaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:36:22 by agerbaud          #+#    #+#             */
/*   Updated: 2023/11/09 10:25:39 by agerbaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*segment_s(const char *str, int start, int end)
{
	char	*segment;
	int		i;

	segment = malloc(sizeof(char) * (end - start + 2));
	i = -1;
	while (start + ++i <= end)
		segment[i] = str[start + i];
	segment[i] = 0;
	return (segment);
}

int	howmany(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[++i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		end;
	int		start;
	char	**final;

	if (!s)
		return (NULL);
	final = malloc(sizeof(char *) * (howmany(s, c) + 1));
	if (!final)
		return (NULL);
	start = 0;
	end = -1;
	i = 0;
	while (s[++end])
	{
		if (s[end] == c)
			start = end + 1;
		else if (s[end + 1] == '\0' || s[end + 1] == c)
		{
			final[i] = segment_s(s, start, end);
			i++;
		}
	}
	final[i] = 0;
	return (final);
}
