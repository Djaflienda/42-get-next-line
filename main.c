/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kschroed <kschroed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 05:26:42 by kschroed          #+#    #+#             */
/*   Updated: 2018/12/21 17:44:09 by kschroed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(void)
{
	int		fd = 0;
	int		fd2 = 0;
	char	*line;
//    int i = 0;

//    if (argc == 2)
//    {

	fd = open("wp.txt", O_RDONLY);
    fd2 = open("main.c", O_RDONLY);
    while (get_next_line(fd2, &line) != 0)
    {
        
        printf("%s\n", line);
		free(line);
    }
    
//        free(line);
//
//        get_next_line(fd2, &line);
//        printf("%s\n", line);
//        free(line);
//        get_next_line(fd, &line);
//        printf("%s\n", line);
//        free(line);
    
    
    
    
    
    
    
    
    
//    while (get_next_line(fd, &line) > 0)
//    {
//        if ()
//    }
//    }
//    if (argc == 1)
//    {
//        get_next_line(0, &line);
//        ft_putendl(line);
//        free(line);
//    }
	// fd = open("main.c", O_RDONLY);
	// fd2 = open("main.c", O_RDONLY);
	// while (get_next_line(fd, &line) > 0)
	// {
	// 	ft_putendl(line);
	// 	free(line);
	// }

	// while (get_next_line(fd, &line) > 0)
	// {
	// 	ft_putendl(line);
	// 	free(line);
	// }

	// while ( i < 20)
	// {
	// 	get_next_line(fd2, &line);
	// 	//ft_putendl(line);
	// 	free(line);
	// 	i++;
	// }

	// while ( i < 30)
	// {
	// 	get_next_line(fd, &line);
	// 	//ft_putendl(line);
	// 	free(line);
	// 	i++;
	// }

	close(fd);
	//close(fd2);
}
