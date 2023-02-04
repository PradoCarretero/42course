/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/01/25 11:25:23 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isprint(int i)
{
	if (!(32 <= i && 126 >= i))
		return (0);
	else
	{
		return (1);
	}
}

// int   main(void)
// {
//    printf("%d", ft_isprint(' '));
//    printf("%d", isprint(' '));
//    return (0);
// }