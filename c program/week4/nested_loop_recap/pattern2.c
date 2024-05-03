#include<stdio.h>

int main(){ //for reverse piramide code
  
  int n,s,k;
  scanf("%d",&n);
  s=0; //for space
  k=(2*n)-1; //fro star
  for (int i = 1; i <=n; i++)
  {
    for (int j = 1; j <=s; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <=k; j++)
    {
        printf("*");
    }

    s++;
    k=k-2;
    printf("\n");
    
    
  }
  
  return 0;
}