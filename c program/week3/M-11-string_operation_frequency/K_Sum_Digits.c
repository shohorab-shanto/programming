#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char digit[n+1];
    scanf("%s",digit);
    int sum = 0;
    for (int i = 0; i <n; i++)
    {
        sum = sum+(digit[i]-'0');
    }

    printf("%d",sum);
    
    
    return 0;
}