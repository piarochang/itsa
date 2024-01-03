#include<stdio.h>
#include<math.h>

int main(){
    float min;
    scanf("%f", &min);
    if(min <= 800){
        min = min * 0.9;
        round(min);
    }else if(min > 800 && min < 1500){
        min = min * 0.81;
        round(min);
    }else if(min >= 1500){
        min = min * 0.79 * 0.9;
        round(min);
    }
    printf("%.1f\n",min);
}