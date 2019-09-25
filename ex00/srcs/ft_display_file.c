/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_file.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/25 15:04:56 by averheij       #+#    #+#                */
/*   Updated: 2019/09/25 15:58:43 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#include "ft_libft.h"

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE];
	int		fd;
	int		ret;

	if (argc > 2)
	{
		ft_putstr("Too many arguements.\n");
		return (0);
	}
	else if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Bad file/path: Open returned -1.\n");
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
		ft_putchar('\n');
	}
}