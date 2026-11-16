#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (0<=input&&input<15&&input!=10&&input!=11)
    // 0未満と15以上をNGにするために0<=input&&input15を書いた
    // またその中から10と11をNGにするために&&input!=10&&input!=11を後ろに書いた
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
