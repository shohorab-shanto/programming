#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    int arr1[n];//first array er value newa
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&m);
    int arr2[m];//secoand array er value newa
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr3[m+n];//duita combine kore 3rd array te value assign kora for 1st array
    for (int i = 0; i <n; i++)
    {
        arr3[i] = arr1[i];
    }
    //akn 2nd array er value 3rd array te assign korar tecninque
    int i=n;// i er value set kora for enter secoand array value,
    for (int j = 0; j <m ; j++)
    {//secoand array er length projonto loop colbe and 1st array index 4 prjnto arr3 te value assign korce and 2nd array index 5 theke value assign suru korbe tai i=n jekhne n=5; er por loop er vitore i++ kore dite hobe jate i er next index e arr2 er next vlaue assign kora jay
        arr3[i] = arr2[j];
        i++;
    }
    
    
    for (int i = 0; i <n+m; i++)
    {
        printf("%d ",arr3[i]);
    }
    
    
    
    return 0;
}