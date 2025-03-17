#include<stdio.h>

int main(){
     float sum = 0;
     for (int i = 1; i < 11; i++)
     {
        sum += i;
     }
     
    printf("%.2f", sum/10);
    return 0;
}