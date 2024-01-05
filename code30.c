#include<stdio.h>

int main(){
    int num;
    int total = 0;
    scanf("%d",&num);
    for(int i = 0; i <= num; i++){
        if(i % 6 == 0 && i % 12 != 0){
            total+=i;
        }
    }
    printf("%d\n",total);
}