#include <stdio.h>

int main(int argc, const char *argv[])
{
    int n;
    if(scanf("%d", &n) != 1)
        return -1;

    FILE* out = fopen("/tmp/clines.txt", "w");
    if(out == NULL)
        return -1;
    char str[1024];
    int size = sizeof(str) / sizeof(str[0]);

    fprintf(out, "%d", n);
    for(int i = 0; i < n; i++){
        if(fgets(str, size, stdin) == NULL)
            return -2;
        // if(scanf("%s", str) != 1){
        //     return -2;
        // }
        fprintf(out, "%s", str);
    }
    fclose(out);

    FILE* in = fopen("/tmp/clines.txt", "r");
    if(in == NULL)
        return -2;

    int line = 0;
    while(fgets(str, size, in) != NULL)
        line++;

    printf("lines: %d\n", line);
    fclose(in);

    return 0;
}