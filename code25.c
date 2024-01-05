#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            if(i == 1){
                printf("%d",i);    
            }else{
                printf(" %d",i);
            }
            
        }
    }
    printf("\n");
}