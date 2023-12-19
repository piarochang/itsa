#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b;
    int ans;
    while(scanf("%d %d",&a, &b)!=EOF){
        ans = a + b;
        printf("%d\n",ans);
    }
}