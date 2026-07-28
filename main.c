#include <stdio.h>

int main(int argc, const char *argv[])
{
    char arr[100];
    int len = 0;

    if(fgets(arr, 99, stdin) == NULL)
        return -1;
    for(int i = 0; i < 99; i++){
        if(arr[i] == '\n'){
            arr[i] = '\0';
            break;
        }
        len++;
    }

    printf("%d\n", len);

    return 0;
}