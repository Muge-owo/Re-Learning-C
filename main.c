#include <stdio.h>

int main(int argc, const char *argv[])
{
    int num;
    if(scanf("%d", &num) != 1)
        return -1;

    if(num % 3 == 0 && num % 5 == 0)
        printf("FizzBuzz\n");
    else if(num % 3 == 0)
        printf("Fizz\n");
    else if(num % 5 == 0)
        printf("Buzz\n");
    

    return 0;
}