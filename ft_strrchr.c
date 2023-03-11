/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/04 12:43:15 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_str;
	int		i;

	s_str = (char *)s;
	i = ft_strlen(s_str);
	while (i >= 0)
	{
		if (s_str[i] == (char)c)
			return (&s_str[i]);
		i--;
	}
	return (NULL);
}

/*int   main(void)
{
   char src[] = "caracol";
   printf("%s\n", ft_strrchr(src, 'r'));
   return (0);
}*/