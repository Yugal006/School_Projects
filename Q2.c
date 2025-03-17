#include<stdio.h>

int main(){
    int n, a = 1;
    printf("Enter the no.\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        a = a * (n-i);
    }
    
    printf("%d", a);
    return 0;
}