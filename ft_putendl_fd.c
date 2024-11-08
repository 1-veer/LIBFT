/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:45 by abougati          #+#    #+#             */
/*   Updated: 2024/11/08 18:22:04 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    if(!s)
    return;
    int i;
    i=0;

    while(s[i])
    {
        write(fd , &s[i] , 1);
        i++;
    }
    write(fd , "\n" , 1);
}


// #include <fcntl.h>

// int main() {
//     char *str = NULL;
//     int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    
//     ft_putendl_fd(str, fd);
//     ft_putendl_fd(str, fd);  // Write the same string twice
//     close(fd);

//     system("cat -e output.txt");
//     return 0;
// }