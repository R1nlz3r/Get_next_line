/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 03:17:20 by mapandel          #+#    #+#             */
/*   Updated: 2017/02/13 12:06:48 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include "./libft/libft.h"
# define BUFF_SIZE 10000

typedef struct		s_line
{
	struct s_line	*next;
	int				fd;
	char			pad_0[4];
	char			*save;
}					t_line;

int		get_next_line(const int fd, char **line);

#endif
