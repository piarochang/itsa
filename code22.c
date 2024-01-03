#include<stdio.h>

int main(){
    int a, b;
    int correct;
    int result;
    scanf("%d %d",&a, &b);
    if(a - b < 0){
        correct = b - a + 1;
    }else{
        correct = a - b + 1;
    }
    result = ((a + b) * (correct)) / 2;
    printf("%d\n",result);
}