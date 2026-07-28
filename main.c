#include <stdio.h>

int main(int argc, const char *argv[])
{
    int arr[5] = {0};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0; i < size; i++){
        if(scanf("%d", &arr[i]) != 1)
            return -1;
    }

    int Max = arr[0];
    for(int i = 1; i < size; i++){
        if(Max < arr[i])
            Max = arr[i];
    }

    printf("%d\n", Max);

    return 0;
}