/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gschaetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:56:52 by gschaetz          #+#    #+#             */
/*   Updated: 2017/01/06 17:12:29 by gschaetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*cp;
	int		i;

	i = 0;
	if (!(cp = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		cp[i] = s[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
