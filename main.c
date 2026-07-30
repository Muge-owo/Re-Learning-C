#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    if(scanf("%d", &n) != 1)
        return -1;

    FILE *fp = fopen("/tmp/clines.txt", "w");
    if(fp == NULL)
        return -2;

    char str[1024];
    int size = sizeof(str) / sizeof(str[0]);
    for(int i = 0; i < n; i++){
        if(fgets(str, size, stdin) == NULL)
            return -3;

        fprintf(fp , "%s", str);
    }
    fclose(fp);

    FILE *in = fopen("/tmp/clines.txt", "r");
    if(in == NULL)
        return -4;

    int line = 0;

    while(fgets(str, size, in) != NULL)
        line++;

    printf("lines: %d\n", line);
    fclose(in);

    return 0;
}