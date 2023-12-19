#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b;
    scanf("%f",&a);
    b = a*a;
    b = (float)((b*100 + 0.5)/100);
    printf("%.1f\n",b);
}