/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viceda-s <viceda-s@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:48:29 by viceda-s          #+#    #+#             */
/*   Updated: 2025/06/04 13:48:37 by viceda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	if (count == 0 || size == 0)
		return (malloc(0));
	total = count * size;
	if (size != 0 && total / size != count)
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
