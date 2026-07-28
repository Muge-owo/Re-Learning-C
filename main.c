#include <stdio.h>

int numadd(int a, int b)
{
    return a + b;
} 

int main(int argc, const char *argv[])
{
    int ia = 0;
    int ib = 0;
    if(scanf("%d", &ia) != 1)
        return -1;
    if(scanf("%d", &ib) != 1)
        return -1;

    printf("%d\n", numadd(ia, ib));
}