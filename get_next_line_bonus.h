/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:06:12 by junmkang          #+#    #+#             */
/*   Updated: 2020/10/23 17:57:37 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef GET_NEXT_LINE_BONUS_H
#	define GET_NEXT_LINE_BONUS_H

#	include <stdlib.h>
#	include <limits.h>
#	include <unistd.h>

#	define _ERROR	-1
#	define _EOF		0
#	define _GOOD	1

#	ifndef BUFFER_SIZE
#	define BUFFER_SIZE 100
#	endif

size_t		ft_strlen(const char *str);
char		*ft_strdup(const char *s, int len);
char		*ft_strjoin(char const *s1, char const *s2);

#	endif
