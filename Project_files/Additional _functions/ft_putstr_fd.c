/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abougati <abougati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:09:55 by abougati          #+#    #+#             */
/*   Updated: 2024/10/23 23:09:56 by abougati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(char const *s , int fd)
{
    int i;
    i=0;

    while(s[i])
    {
        write(fd, &s[i] , 1);
        i++;
    }
}