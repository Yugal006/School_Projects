#include<stdio.h>

void Add(float a, float b){
    printf("The Addition of %.2f and %.2f is: %.2f\n", a, b, a+b);
}
void Sub(float a, float b){
    printf("The Subraction of %.2f and %.2f is: %.2f\n", a, b, a-b);
}
void Multi(float a, float b){
    printf("The Multiplication of %.2f and %.2f is: %.2f\n", a, b, a*b);
}
void Division(float a, float b){
    printf("The Division of %.2f and %.2f is: %.2f\n", a, b, a/b);
}
void Remainder(int a, int b){
    printf("The Remainder of %d and %d is: %d\n", a, b, a%b);
}


int main(){
    float n1 = 0, n2 = 0;
    int func;
    printf("Enter First Number\n");
    scanf("%f", &n1);
    printf("Enter Second Number\n");
    scanf("%f", &n2);
    printf("Which Arithmatic Operation you want to perform:\n");
    printf("Type 1 for Addition\n");
    printf("Type 2 for Subtraction\n");
    printf("Type 3 for Multiplication\n");
    printf("Type 4 for Division\n");
    printf("Type 5 for remainder\n");

    scanf("%d", &func);
    if (func == 1)
    {
        Add(n1, n2);
    }
    else if (func == 2)
    {
        Sub(n1, n2);
    }
    else if (func == 3)
    {
        Multi(n1, n2);
    }
    else if (func == 4)
    {
        Division(n1, n2);
    }
    else if (func == 5)
    {
        Remainder(n1, n2);
    }
    
    
    return 0;
}