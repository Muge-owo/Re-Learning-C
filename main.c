#include <stdio.h>
#include <math.h>

typedef struct {
    int x, y;
} Point;


int point(Point p1, Point p2)
{
    return (pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main(void) {
    Point p1, p2;
    
    if(scanf("%d %d", &(p1.x), &(p1.y)) != 2 || scanf("%d %d", &(p2.x), &(p2.y)) != 2) 
        return -1;

    printf("%d\n", point(p1, p2));

    return 0;
}
