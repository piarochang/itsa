#include<stdio.h>

int main(){
    int a, b, c;
    int plus, times, minus, divide;
    scanf("%d %d",&a, &b);
    plus = a + b;
    minus = a - b;
    times = a * b;
    divide = a / b;
    c = a%b;
    printf("%d+%d=%d\n",a, b, plus);
    printf("%d*%d=%d\n",a, b, times);
    printf("%d-%d=%d\n",a, b, minus);
    if(c < 0){
        printf("%d/%d=%d...%d\n",a, b, divide - 1, c + b);
    }else{
        printf("%d/%d=%d...%d\n",a, b, divide, c);
    }
    
    
    
}