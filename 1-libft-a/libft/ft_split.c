/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:12:58 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/25 14:03:26 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			if (s[i] == '\0')
				break ;
		}
		while (s[i] != c && s[i])
			i++;
		d++;
	}
	return (d);
}

char	**fill_str(char const *s, char c, int start, char **out)
{
	int	i;
	int	d;

	i = 0;
	d = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
		{
			out[d] = ft_substr(s, start, (i - start));
			if (!out[d])
			{
				free(out);
				return (NULL);
			}
			d++;
		}
	}
	out[d] = 0;
	return (out);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		d;
	char	**out;
	char	**p;
	int		start;

	if (!s)
		return (0);
	out = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	out = fill_str(s, c, start, out);
	return (out);
}