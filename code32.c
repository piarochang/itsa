#include<stdio.h>

int main(){
    int num;
    int total = 0;
    scanf("%d",&num);
    for(int i = 1; i <= num; i++){
        if(i == 1){
            printf("%d", i);
        }else{
            printf(" + %d", i);
        }
        total += i;
    }
    printf(" = %d\n",total);
}