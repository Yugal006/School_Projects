#include<stdio.h>

int main(){
    int sum = 0, x, m;
    printf("Enter no.\n");
    scanf("%d", &x);
    printf("Enter limit.\n");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        sum += x*i;
    }
    
    printf("%d", sum);
    return 0;
}