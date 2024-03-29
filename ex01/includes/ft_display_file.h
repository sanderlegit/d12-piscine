/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_file.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/25 15:05:33 by averheij       #+#    #+#                */
/*   Updated: 2019/09/25 16:47:18 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "ft_libft.h"
# define BUF_SIZE 16

int		ft_display_file(char *path);
#endif
