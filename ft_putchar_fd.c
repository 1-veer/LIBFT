/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:40 by abougati          #+#    #+#             */
/*   Updated: 2024/10/24 15:58:39 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c , int fd)
{
    write( fd , &c , 1);
}

// #include <fcntl.h>

// int main() {
//     char c = 'A';
//     int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
//     if (fd == -1) {
//         printf("Error opening file\n");
//         return 1;
//     }

//     ft_putchar_fd(c, fd);
//     close(fd);

//     printf("Character '%c' written to 'output.txt'\n", c);
//     return 0;
// }

