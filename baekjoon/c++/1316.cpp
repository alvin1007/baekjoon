#include <iostream>
#include <string>

bool IsHave(char* pc, char c)
{
    while (*pc != '\0')
    {
        if (*pc == c)
        {
            return true;
        }
        pc++;
    }
    *pc = c;
    return false;
}

char* Jump(char* pc)
{
    char c = *pc;
    while (c == *pc)
    {
        pc++;
    }
    return pc;
}

void reset(char* pa)
{
    while (*pa != '\0')
    {
        *pa = '\0';
        pa++;
    }
}

int main()
{
    int N, groupCnt = 0;
    std::cin >> N;
    char ch[200] = {'\0'};
    char alp[100] = {'\0'};
    for (int i = 0; i < N; i++)
    {
        std::cin >> ch;
        char* pc = ch;
        while (1)
        {
            if (IsHave(alp, *pc))
            {
                break;
            }
            pc = Jump(pc);
            if (*pc == '\0')
            {
                groupCnt++;
                break;
            }
        }
        ch[0] = {'\0',};
        reset(alp);
    }
    std::cout << groupCnt;
    return 0;
}