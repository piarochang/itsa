#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    for(int i = 1;i <= num;i++){
        int square = i * i;
        printf("%d*%d=%d\n",i, i, square);
    }
}