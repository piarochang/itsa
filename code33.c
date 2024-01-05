#include <stdio.h>
#include <math.h>

int main() {
    double dist, t;
    scanf("%lf", &dist);
    dist *= 100; 
    t = dist / (100 - 30 * 2.54);
    printf("%d\n", (int)ceil(t));

    return 0;
}