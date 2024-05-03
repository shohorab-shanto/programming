#include<stdio.h>

int main()
{
    int n;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i <n; i++)
        {
            scanf("%d",&a[i]); // taking inputs
        }
        int cnt[7]={0}; // count array assuming its index as a variable and initialize with 0;
        for (int i = 0; i < n; i++)
        {
            int val = a[i]; // a[i] er index er value hobe cnt[] er index then or value ++  kore dite hbe 
            // ekhne a[i]=5 hole cnt[5] hobe and er value ++ kore 1 barano hbe mean cnt[5]=1 pore abr pele cnt[5]=2 hbe ++ hoiea;
            cnt[val]++;
        }

        for (int i = 0; i <=6; i++)
        {
        printf("%d - %d\n",i,cnt[i]);
        }
    return 0;
}