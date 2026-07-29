#include <stdio.h>

int main(int argc, const char *argv[])
{
    unsigned int n = 0;
    if(scanf("%u", &n) != 1)
        return -1;
    
    unsigned long long num = 0;
    while(n != 0)
        num += n--;

    printf("%llu\n", num);

    return 0;
}