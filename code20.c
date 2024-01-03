#include<stdio.h>

int main(){
    int num;
    int temp = 0;
    scanf("%d",&num);
    for(int i = 1;i <= num;i++){
        if(i % 3 == 0){
            temp+=i;
        }
    }
    printf("%d\n",temp);
}