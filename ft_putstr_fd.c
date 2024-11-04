/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:55 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:58:52 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)

{
    int i;
    i=0;

    while(s[i])
    {
        write(fd, &s[i] , 1);
        i++;
    }
}

// #include <fcntl.h>

// int main() {
//     char* c = "Ayoub";
//     int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
//     if (fd == -1) {
//         printf("Error opening file\n");
//         return 1;
//     }

//     ft_putstr_fd(c, fd);
//     close(fd);

//     printf("Character '%s' written to 'output.txt'\n", c);
//     printf("%d",fd);
//     return 0;
// }