#include <stdio.h>

int main(void)
{
    int input;
    int x;
    scanf("%d", &input);
    x = input;
    if (0<=x&&x>=5)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
