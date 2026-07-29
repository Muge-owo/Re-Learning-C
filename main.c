#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int n;
    if(scanf("%d", &n) != 1)
        return -1;

    int *arr = calloc(n, sizeof(int));

    if(arr == NULL)
        exit(-1);

    for(int i = 0; i < n; i++){
        if(scanf("%d", arr+i) != 1)
            exit(-2);
    }

    int num = 0;
    for(int i = 0; i < n; i++){
        num += *(arr+i);
    }

    printf("%d", num);

    free(arr);

    return 0;
}
