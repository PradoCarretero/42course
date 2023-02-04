/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/04 15:43:56 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_str;
	int		i;

	s_str = (char *)s;
	i = 0;
	while (s_str[i])
	{
		if (s_str[i] == (char)c)
			return (&s_str[i]);
		i++;
	}
	if (s_str[i] == (char)c)
		return (&s_str[i]);
	return (NULL);
}

//int main (void)
//{
//	char	str[]="caracol";
//	printf("%s\n", ft_strchr(str, 'r'));
//	return (0);
//}
