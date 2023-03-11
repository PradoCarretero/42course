/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:36:02 by pcarrete          #+#    #+#             */
/*   Updated: 2023/03/04 16:29:06 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pointer;
	size_t			size;
	unsigned int	i;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	pointer = (char *)malloc(sizeof(char) * (len + 1));
	if (!pointer)
		return (NULL);
	i = 0;
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