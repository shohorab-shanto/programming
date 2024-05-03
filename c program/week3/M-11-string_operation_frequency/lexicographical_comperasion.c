#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0;
    //shorcut start
    int v=strcmp(a,b);
    if(v<0)
    {
        printf("A is smaller");
    }else if(v>0)
    {
        printf("B is smaller");
    }else
    {
        printf("same");
    }
    //shortcut end

    // while (1)
    // {
    //     if(a[i]=='\0' && b[i]=='\0') //for a=abc b=abc
    //     {
    //         printf("a & B Same\n");
    //         break;

    //     }else if(a[i]=='\0') //a=ab b=abc
    //     {
    //         printf("A choto");
    //         break;

    //     }else if(b[i]=='\0') //a=abc b=ab
    //     {
    //         printf("B choto");
    //         break;
    //     }

    //     if(a[i]==b[i]) // when index match move to next character
    //     {
    //         i++;
    //     }else if(a[i]<b[i]) // a char i b char i theke chto hole
    //     {
    //         printf("A chotoo");
    //         break;

    //     }else // b char i a char i theke choto hole
    //     {
    //         printf("B chotoo");
    //         break;
    //     }
    // }
    
    return 0;
}