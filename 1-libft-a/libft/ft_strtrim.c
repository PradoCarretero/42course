/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:50:56 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/25 16:58:24 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	p;
	int	start;
	int	end;

	i = 0;
	p = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (s1);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && strchr(set, s1[start]))
	{
		start++;
	}
	while ((end > start) && strchr(set, s1[end - 1]))
	{
		end--;
	}
	return (ft_substr (s1, start, (end-start)));
}
