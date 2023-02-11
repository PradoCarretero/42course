/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:36:52 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/11 15:30:27 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*pointer;

	if (s1 && s2)
	{
		pointer = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (pointer == NULL)
			return (NULL);
		i = 0;
		while (*s1)
		{
			pointer[i] = *s1++;
			i++;
		}
		while (*s2)
		{
			pointer[i] = *s2++;
			i++;
		}
		pointer[i] = '\0';
		return (pointer);
	}
	return (NULL);
}
