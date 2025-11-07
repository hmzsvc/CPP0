#include <iostream>

class excersize
{
    public:
    int body_count = 0;
    int deneme();
    private:
    int total_weight = 5;
};


int excersize::deneme()
{
    return(total_weight);
}
int main(int ac, char **av)
{
    int i = 1;
    int h = 0;
    excersize hüso;
    std::cout << hüso.body_count << std::endl;
    std::cout << hüso.deneme() << std::endl;
    std::string hamza;
    hamza = av[i];
    h = hamza.length();
    hamza.append(" ahmet");
    std::cout << hamza << " " << h << std::endl;
    // for (; av[i]; i++)
    // {
    //     // std::cin >> av[i]; // burası stdin gibi dosya içine yazma yada input alma işlemi.
    //     for (int j = 0; av[i][j]; j++)
    //     {
    //         if (!isupper(av[i][j]))
    //             av[i][j] = toupper(av[i][j]);
    //     }
    //     std::cout << av[i] << std::endl << std::endl;
    // }   
}