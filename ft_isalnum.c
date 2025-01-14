/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinazo- <rpinazo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:40:41 by rpinazo-          #+#    #+#             */
/*   Updated: 2024/04/19 13:53:30 by rpinazo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int val)
{
	if (ft_isdigit(val) || ft_isalpha(val))
	{
		return (val);
	}
	return (0);
}
