#include "inttypes.h"
#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    if(scanf("%d", &n) != 1)
        return -1;

    FILE* out = fopen("./12-file-io/clines.txt", "w");
    char str[1024];
    int size = sizeof(str) / sizeof(str[0]);

    fprintf(out, "%d", n);
    for(int i = 0; i < n; i++){
        if(fgets(str, size, stdin) == NULL){
            return -2;
        }
        fprintf(out, "%s", str);
    }

    FILE* in = fopen("./12-file-io/clines.txt", "r");

    int line = 0;
    while(fgets(str, size, in) != NULL)
        line++;

    printf("lines: %d\n", line);

    return 0;
}