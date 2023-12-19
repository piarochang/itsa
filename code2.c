#include<stdio.h>

int main(){
    float a,b,c;
    float ans;
    scanf("%f %f %f",&a, &b, &c);
    ans = (a+b) * c / 2;
    printf("Trapezoid area:%.1f\n",ans);
}