#include<stdio.h>

int main(){
    int num;
    int check;
    scanf("%d",&num);
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            check++;
        }
    }
    if(check == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}