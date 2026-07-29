#include <stdio.h>

int square(int x)
{
    return x * x;
}

int main(int argc, const char *argv[])
{
    int n;
    if(scanf("%d", &n) != 1)
        return -1;

    printf("%d\n", square(n));
    
    return 0;
}