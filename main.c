#include <stdio.h>

int main(int argc, const char *argv[])
{
    int iWidth = 0;
    int iHeight = 0;
    if(scanf("%d", &iWidth) != 1)
        return -1;
    if(scanf("%d", &iHeight) != 1)
        return -1;

    printf("%d\n", iWidth * iHeight);
}