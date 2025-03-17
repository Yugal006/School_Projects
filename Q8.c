#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,10}, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    
    printf("sum : %d and average : %d", sum, sum/5);
    return 0;
}