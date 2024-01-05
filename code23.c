#include<stdio.h>

int arr[1000 * 1000];

int main(){
    int num;
    int count = 0;
    scanf("%d",&num);
    for(int i = 1; i <= num; i++){
        if(i % 5 == 0 && i % 7 == 0){
            arr[count] = i;
            count++;
        }
    }
    int j;
    for(j = 0; j < count - 1; j++){
        printf("%d ",arr[j]);
    }
    printf("%d\n",arr[j]);
}