#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    if(a + b <= c){
        printf("unfit\n");
    }else if(a + c <= b){
        printf("unfit\n");
    }else if(b + c <= a){
        printf("unfit\n");
    }else{
        printf("fit\n");
    }
}