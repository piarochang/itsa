#include<stdio.h>

int main(){
    int a, a_square, a_cube;
    scanf("%d",&a);
    a_square = a * a;
    a_cube = a * a * a;
    printf("%d %d %d\n",a, a_square, a_cube);
}