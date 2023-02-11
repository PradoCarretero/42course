/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:36:52 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/04 18:20:16 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size1;
	int		size2;
	char	*pointer;

	if (s1 && s2)
	{
		size1 = ft_strlen(s1);
		size2 = ft_strlen(s2);
		pointer = malloc(sizeof(char) * (size1 + size2 + 1));
		if (pointer == NULL)
			return (NULL);
		i = 0;
		j = 0;
		while (s1[j])
		{
			pointer[i] = s1[j];
			i++;
			j++;
		}
		j = 0;
		while (s2[j])
		{
			pointer[i] = s2[j];
			i++;
			j++;
		}
		pointer[i] = '\0';
		return (pointer);
	}
	return (NULL);
}
