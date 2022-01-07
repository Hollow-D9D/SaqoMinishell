/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_identifier.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:34:45 by shovsepy          #+#    #+#             */
/*   Updated: 2022/01/07 12:36:09 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_is_valid_identifier(char *var)
{
	int	i;

	i = 0;
	if (!var)
		return (0);
	if (!(ft_isalpha(var[i]) || var[i] == '_') || var[i] == '=')
		return (0);
	i++;
	while (var[i])
	{
		if (!(ft_isalnum(var[i]) || var[i] == '_') || var[i] == '=')
			return (0);
		i++;
	}
	return (1);
}
