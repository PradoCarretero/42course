/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:12:58 by pcarrete          #+#    #+#             */
/*   Updated: 2023/02/18 18:04:35 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;
	int d;
	int	j;
	/* int	str[ft_strlen((char *)s)]; */
	int	str[100];
	char **out;
	char *sub;

	d = 0;
	i = 0;


	while (s[i])
	{
		while(s[i] == c)
		{
			i++;
			if (s[i] == '\0')
				break;
		}
		str[d] = i;
		printf("\n%d", str[d]);
		while(s[i] != c && s[i])
		{
			i++;
		}
		d++;
	}

	out = (char**)ft_calloc((d + 1), sizeof(char*));
	j = 0;
	while (s[i])
	{
		while(s[i] == c)
		{
			i++;
			if (s[i] == '\0')
				break;
		}
		printf("\n%d", str[d]);
		sub = malloc();
		while(s[i] != c && s[i])
		{
			i++;
			
		}
		j = 0;
		d++;
	}

}

int	main(void)
{
	char const *s;
	char c;

	c = 'H';
	s = "olaHcacaHojoHHHlo";
	/* printf("%s", ft_strchr("hola munlafdsladsf", 'l')); */
	/* printf("%s", ft_split(s, c)); */
	ft_split(s, c);
	return (0);
}
