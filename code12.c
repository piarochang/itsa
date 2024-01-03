#include<stdio.h>

int main(){
    int total;
    int a, b, c;
    scanf("%d",&total);
    a = total/10;
    total %= 10;
    b = total/5;
    total %= 5;
    c = total/1;
    printf("NT10=%d\n",a);
    printf("NT5=%d\n",b);
    printf("NT1=%d\n",c);

}