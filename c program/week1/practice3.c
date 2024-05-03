#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("input taken: %d\n",a);
    if(a>0){
        if(a%2==0){
            printf("even");
        }else{
            printf("Odd");
        }
    }else{
        printf("Its a negative input");
    }
}