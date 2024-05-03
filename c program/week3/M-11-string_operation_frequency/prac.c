#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int test;
scanf("%d",&test);
for (int i = 0; i < test; i++)
{
   int p1,p2,d1;
   scanf("%d %d %d",&p1,&p2,&d1);
   int d2=(p1*d1)/(p1+p2);
   float dayDiff=d1-d2;
   if(dayDiff>0 && dayDiff<1){
    printf("1\n");
   }else{
    printf("%d\n",(int)(dayDiff));
   }
}

    return 0;
}
