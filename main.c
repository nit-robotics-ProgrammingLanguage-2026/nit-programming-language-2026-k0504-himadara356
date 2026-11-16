#include <stdio.h>

int main(void)
{
    int input;
    int x;
    scanf("%d", &input);
    if (0<=input&&input<=5)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
