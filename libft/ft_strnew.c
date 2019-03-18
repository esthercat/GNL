/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmoreau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:30:50 by esmoreau          #+#    #+#             */
/*   Updated: 2018/11/09 17:30:51 by esmoreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!(new = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i <= size)
	{
		new[i] = '\0';
		i++;
	}
	new[i] = '\0';
	return (new);
}
