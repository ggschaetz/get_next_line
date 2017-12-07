/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gschaetz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:35:41 by gschaetz          #+#    #+#             */
/*   Updated: 2017/01/16 13:06:17 by gschaetz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*d;

	i = 0;
	j = 0;
	if (!(s1) || !(s2))
		return (NULL);
	if (!(d = (char *)malloc(sizeof(s1) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[i] != '\0')
		d[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		d[j++] = s2[i++];
	d[j] = '\0';
	free((void *)s1);
	return (d);
}
