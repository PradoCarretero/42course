/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:12:58 by pcarrete          #+#    #+#             */
/*   Updated: 2023/03/04 12:05:46 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	free_malloc(char **out)
{
	int	i;

	i = 0;
	while (out[i])
	{
		free(out[i]);
		i++;
	}
	free(out);
}

int	count_words(char const *s, char c)
{
	int	i;
	int	d;

	if (!s[0])
		return (0);
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
				free_malloc(out);
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
