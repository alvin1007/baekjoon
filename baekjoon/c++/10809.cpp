#include <iostream>

int main()
{
    int alp = 97, cnt = 0;
    char S[200];
    std::cin >> S;
    for (int i = 0; i < 26; i++)
    {
        while (1)
        {
            if (S[cnt] == alp)
            {
                std::cout << cnt;
                alp++;
                cnt = 0;
                break;
            }
            cnt++;
            if (S[cnt] == '\0')
            {
                std::cout << "-1";
                alp++;
                cnt = 0;
                break;
            }
        }
        if (i == 25) break;
        std::cout << " ";
    }
    return 0;
}