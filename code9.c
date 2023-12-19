#include<stdio.h>

int main(){
    int a = 1,n;
    scanf("%d",&n);
    if(n < 31){
        for(int i = 0;i < n;i++){
            a*=2;
        }
        printf("%d\n",a);
        
    }else{
        printf("Value of more than 31\n");
    }
    
}