#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++)
    {
        string N;
        cin >> N;
        regex rx(R"((100+1+|01)+)");
        if (regex_match(N, rx))
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }
    return 0;
}