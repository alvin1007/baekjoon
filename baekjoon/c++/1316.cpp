#include <iostream>

bool IsHave(char* pc, char c, int cnt)
{
    int temp = 0;
    while (*pc != '\0')
    {
        if (cnt == temp)
        {
            pc++;
            temp++;
            continue;
        }
        if (*pc == c) return true;
        pc++;
        temp++;
    }
    return false;
}

int main()
{
    int N, groupCnt = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        char ch[200];
        int cnt = 0;
        std::cin >> ch;
        char* pc = ch;
        while (1)
        {
            if (IsHave(ch, *pc, cnt) && *pc != *(pc - 1) && *pc != *(pc + 1))
            {
                break;
            }
            if (*pc == '\0')
            {
                groupCnt++;
                break;
            }
            cnt++;
            pc++;
        }
    }
    std::cout << groupCnt;
    return 0;
}