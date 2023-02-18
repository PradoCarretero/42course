/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:36:02 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/18 11:47:45 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pointer;
	unsigned int	i;
	unsigned int	len_s;

	len_s = ft_strlen((char *)s);
	i = 0;
	if (len > (len_s - start))
		len = len_s - start;
	pointer = (char *)malloc(sizeof(char) * (len + 1));
	if (!pointer)
		return (NULL);
	if (start >= len_s || len == 0 || !s)
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
	char *s = "hola";
    size_t size = 18446744073709551615;
	printf("%s", ft_substr(s, 4294967295, size));
} */