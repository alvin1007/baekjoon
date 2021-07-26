#include <iostream>

int main()
{
    char RS[30] = "\0";
    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++)
    {
        int R;
        std::cin >> R;
        std::cin >> RS;
        int cnt = 0;
        while (1)
        {
            for (int j = 0; j < R; j++)
            {
                std::cout <<  RS[cnt];
            }
            cnt++;
            if (RS[cnt] == '\0') break;
        }
        std::cout << "\n";
    }
    return 0;
}