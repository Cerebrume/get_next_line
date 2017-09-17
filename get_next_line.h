/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkazanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 16:05:28 by dkazanov          #+#    #+#             */
/*   Updated: 2017/03/29 16:05:36 by dkazanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 256
# define ERR -1
# define TRUE 1
# define DONE 0

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct				s_lst
{
	char					*content;
	int						fd;
	struct s_lst			*next;
}							t_gnl;

int							get_next_line(const int fd, char **line);

#endif
