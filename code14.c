#include<stdio.h>

int main(){
    int len = 100;
    int a, b;
    scanf("%d %d",&a, &b);
    if(a <= 100 && b <= 100){
        printf("inside\n");
    }else{
        printf("outside\n");
    }
}