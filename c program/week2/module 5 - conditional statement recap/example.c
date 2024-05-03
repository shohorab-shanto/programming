#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);

    if(a>='0' && a<='9'){
        printf("IS DIGIT");
    }else if(a>='a'&& a<='z'){
        printf("ALPHA\n");
        printf("IS SMALL");
    }else{
        printf("ALPHA\n");
        printf("IS CAPITAL");
    }
}