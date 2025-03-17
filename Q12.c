#include<stdio.h>

int main(){
    int arr1[2][2] = {
        {1,2},
        {3,4}
    };
    int arr2[2][2] = {
        {5,6},
        {7,8}
    }, add[2][2];
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        add[i][j] = arr1[i][j] + arr2[i][j];
      }
      
    }

    for (int i = 0; i < 2; i++)
    {
        printf("[");
      for (int j = 0; j < 2; j++)
      {
        printf("%d ", add[i][j]);
      }
      printf("\b]\n");
    }
    
    return 0;
}