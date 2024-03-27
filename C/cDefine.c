#include <stdio.h>

#define ADD(x) x + x
#define SUB(x) x - x

int main()
{
    int y = ADD(3) / SUB(3);
    printf("%d\n", ADD(3)); // 6
    printf("%d\n", SUB(3)); // 0
    return 0;
}