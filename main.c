#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (0<=input&&input<15&&input!=10&&input!=11)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
