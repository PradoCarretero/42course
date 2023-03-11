/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcarrete <pcarrete@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:47:27 by pcarrete          #+#    #+#             */
/*   Updated: 2023/01/25 11:25:17 by pcarrete         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isascii(int i)
{
	if (!(0 <= i && 127 >= i))
		return (0);
	else
	{
		return (1);
	}
}

// int   main(void)
// {
//    char result;
//    result = ft_isascii('!');
//    printf("%d", result);
//    printf("%d", isascii('ñ'));
//    return (0);
// }