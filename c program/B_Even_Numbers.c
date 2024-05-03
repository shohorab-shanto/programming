#include<stdio.h>

int main()
{
    int a,i;
    scanf("%d",a);
    if(a==1){
        printf("-1\n");
    }else{
        for (i=1;i <=a;i++)
        {
            if(a%2==0){
                printf("%d\n",i);
            }
        }
        
    }
    return 0;
}