#include <iostream>

int main()
{
    int Ncnt, Nsum = 0;
    std::cin >> Ncnt;
    char N[Ncnt];
    std::cin >> N;
    for (int i = 0; i < Ncnt; i++)
        Nsum += N[i] - 48;
    std::cout << Nsum;
    return 0;
}