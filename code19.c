#include<stdio.h>

int main(){
    int salary, hour;
    float total = 0;
    scanf("%d %d",&hour, &salary);
    if(hour <= 60){
        total = salary * hour;
    } else if(hour > 60 && hour <= 120){
        hour-=60;
        total = (60 * salary) + (hour * salary *1.33);
    }else if(hour > 120){
        hour-=120;
        total = (60 * salary) + (60 * salary  * 1.33) + (hour * salary * 1.66);
    }
    printf("%.1f\n",total);
}