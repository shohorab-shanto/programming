#include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a>=10000){
//         printf("Gucci bag\n");
//         if(a>20000){
//             printf("gucci belt");
//         }
//     }else if(a>=5000 && a<=10000){
//         printf("Levis bag");
//     }else{
//         printf("something else");
//     }
// }

// int main()
// {
//     int k;
//     for (k = -3; k < -5; k++)
//         printf("Hello ");
//     return 0;
// }

// int main()
// {
//     int i = 0;
//     while (i < 3) {
//         i++;
//     }
//    printf("%d",i);
//    return 0;
// }

// int main()
// {
//     int a = 0, i;
//     for (i = 0;i < 5; i++)
//     {
//         continue;
//         a++;
//     }
//     printf("%d %d",i,a);
//     return 0;
// }

// int main()
// {
//     int a = 0, i;
//     for (i = 0;i < 5; i++)
//     {
//         continue;
//         a++;
//     }
//     printf("%d %d",i,a);
//     return 0;
// }


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a;
    long long int b;
    float c;
    char d;
    
    scanf("%d",&a);
    scanf("%lld",&b);
    scanf("%f",&c);
    scanf("%c",&d);
    
    printf("%d",a);
    printf("%lld",b);
    printf("%.2f",c);
    printf("%c",d);
    
    return 0;
}