#include<stdio.h>

int main()
{
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int i=0;
    while (1)
    {
        if(a[i]=='\0')
        {
            printf("%s",a);
            break;

        }else if(b[i]=='\0')
        {
            printf("%s",b);
            break;
        }

        if(a[i]==b[i])
        {
            i++;
        }else if(a[i]<b[i])
        {
            printf("%s",a);
            break;

        }else
        {
            printf("%s",b);
            break;

        }
    }
    
    return 0;
}