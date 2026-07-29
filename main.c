#include <stdio.h>

void swap(int *a, int *b)
{
    if(a == b)
        return ;
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

int main(int argc, const char argv[])
{
    int iA, iB;
    if(scanf("%d %d", &iA, &iB) != 2)
        return -1;

    swap(&iA, &iB);

    printf("%d %d\n", iA, iB);

    return 0;
}