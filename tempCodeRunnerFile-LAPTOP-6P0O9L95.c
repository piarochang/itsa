#include<stdio.h>

int main(){
    int num;
    int temp = 1;
    scanf("%d",&num);
    if(num > 0 && num < 20){
        for(int i = num;i > 0;i--){
        temp = temp * i;
    }
    printf("%d\n",temp);
    }
}