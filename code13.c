#include<stdio.h>

int main(){
    int num;
    int d, h, m;
    scanf("%d",&num);
    d = num / 86400;
    num %= 86400;
    h = num / 3600;
    num %= 3600;
    m = num / 60;
    num %= 60;
    printf("%d days\n",d);
    printf("%d hours\n",h);
    printf("%d minutes\n",m);
    printf("%d seconds\n",num);
}