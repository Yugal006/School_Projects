#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,10}, n;
    printf("Enter no.\n");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        if (n == arr[i])
        {
            printf("Yes, the given number %d is present in array at %d position\n", n, i);
            break;
        }
        else if (i == 4)
        {
            printf("NO, the given number %d is not present in array\n", n);
            break;
        }
    }
    return 0;
}