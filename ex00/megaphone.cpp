#include <iostream>

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