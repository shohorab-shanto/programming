#include<stdio.h>

int main()
{
    //condition
    // int a,b;
    // scanf("%d %d",&a,&b);
    // if(a>=b){
    //     printf("Yes");
    // }else{
    //    printf("No");
    // }

    // int a,b;
    // scanf("%d %d",&a,&b);
    // if(a%b==0 || b%a==0){
    //     printf("Multiples");
    // }else{
    //     printf("No Multiples");
    // }

    char letter;

    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z') {
        letter = letter - 32;
        printf("%c", letter);
    } else if (letter >= 'A' && letter <= 'Z') {
        letter = letter + 32;
        printf("%c", letter);
    } else {
        printf("Please enter a valid letter.\n");
    }

    return 0;
}