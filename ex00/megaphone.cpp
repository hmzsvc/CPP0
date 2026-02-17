/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasivaci <hasivaci@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:36:47 by hasivaci          #+#    #+#             */
/*   Updated: 2026/02/17 18:04:22 by hasivaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    av++;
    for (int i = 0; av[i]; i++)
    {
        for (int h = 0; av[i][h]; h++)
        {
            if (islower(av[i][h]))
                std::cout << (char)toupper(av[i][h]);
            else
                std::cout << (char)av[i][h];
        }
    }
    std::cout << std::endl;
    return(0);
}

// class excersize
// {
//     public:
//     int body_count = 0;
//     int get_total_weight();
//     void set_total_weight(int w);
//     private:
//     int total_weight = 5;
// };


// int excersize::get_total_weight()
// {
//     return(total_weight);
// }

// void excersize::set_total_weight(int total_weight)
// {
//     this->total_weight = total_weight;
// }

// int main(int ac, char **av)
// {
//     int i = 1;
//     int h = 0;
//     excersize hüso;
//     std::cout << hüso.body_count << std::endl;
//     std::cout << hüso.get_total_weight() << std::endl;
//     std::string hamza;
//     hamza = av[i];
//     h = hamza.length();
//     hamza.append(" ahmet");
//     std::cout << hamza << " " << h << std::endl;
//     // for (; av[i]; i++)
//     // {
//     //     // std::cin >> av[i]; // burası stdin gibi dosya içine yazma yada input alma işlemi.
//     //     for (int j = 0; av[i][j]; j++)
//     //     {
//     //         if (!isupper(av[i][j]))
//     //             av[i][j] = toupper(av[i][j]);
//     //     }
//     //     std::cout << av[i] << std::endl << std::endl;
//     // }   
// }