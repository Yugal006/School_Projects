#include<stdio.h>
#include <ctype.h>

int main(){
    char x;
    printf("Enter a letter\n");
    scanf("%c", &x);
    x = tolower(x);
    switch (x)
    {
        case 'a':
        printf("vowel\n");
        break;
        case 'e':
        printf("vowel\n");
        break;
        case 'i':
        printf("vowel\n");
        break;
        case 'o':
        printf("vowel\n");
        break;
        case 'u':
        printf("vowel\n");
        break;
        default:
        printf("Consonant\n");
        break;
    }
    return 0;
}