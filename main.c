#include <stdio.h>

#define CUBE(x) (x)*(x)*(x)

int main(int argc, const char *argv[])
{
    int x;
    if(scanf("%d", &x) != 1){
        fprintf(stderr, "__%d__\n", __LINE__);
        return -1;
    }

    printf("%d cubed is %d\n", x, CUBE(x));

    return 0;
}