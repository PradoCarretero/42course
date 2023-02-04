/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:24:31 by pcarrete          #+#    #+#             */
/*   Updated: 2023/01/25 11:25:04 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	m;
	int	c;

	c = 0;
	m = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		m = m * (-1);
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		c = c * 10 + (str [i] - '0');
		i++;
	}
	return (c * m);
}

/*int	main(void)
{
	char	str[]="    \f  --+-+134- -fds-+4+65";
	printf("%d", ft_atoi(str));
}*/
