#include<stdio.h>

int main(){
    int a, b;
    int compare;
    int temp;
    scanf("%d %d",&a, &b);
    if(a < b){
        compare = b;
    }else{
        compare = a;
    }
    for(int i = 1;i < compare;i++){
        if(a % i == 0 && b % i == 0){
            temp = i;
        }
    }
    printf("%d\n",temp);
}