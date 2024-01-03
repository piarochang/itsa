#include<stdio.h>
#include<math.h>

int main(){
    int radius = 200;
    int a, b;
    int square;
    int result;
    scanf("%d %d",&a, &b);
    square = (a * a)+(b * b);
    result = sqrt(square);
    if(result <= radius){
        printf("inside\n");
    }else{
        printf("outside\n");
    }

}