/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:36:02 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/11 16:42:30 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pointer;
	unsigned int	i;
	size_t			len_s;

	len_s = ft_strlen((char *)s);
	
	i = 0;
	if (len > (len_s - start))
		len = len_s - start;
	pointer = malloc(sizeof(char) * (len + 1));
	if (pointer == NULL)
		return (NULL);
	if (start >= len_s || len == 0)
	{
		pointer[i] = '\0';
		return (pointer);
	}
	while (i < len)
	{
		pointer[i] = s[i + start];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}

/* int	main ()
{
	char *s = "";
    size_t size = 0;
	printf("%s", ft_substr(s, 0, size));
} */