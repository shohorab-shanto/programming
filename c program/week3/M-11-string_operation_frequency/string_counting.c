#include <stdio.h>
#include <string.h>

int main()
{ // kon character koybar aca eta ber kora
    char a[100];
    scanf("%s", a);
    int cnt[26] = {0};
    for (int i = 0; i < strlen(a); i++)
    {
        int value = a[i] - 97; // to get counting number 0 1 2 in this format for 26 alphabtic order
                               //    or int value = a[i]-'a';
        // printf("%c ",value+97); //
        // printf("%d ",value+97); // just to show vlaues
        cnt[value]++;
    }
    // printf("\n");

    //for 26 ta char or  a - z wise counting show
    
    // for (int i = 0; i < 26; i++)
    // {
    //     // printf("%c %d\n",i+'a',cnt[i]);//to show all
    //     // printf("%c %d\n",i+97,cnt[i]);

    //     // jegulor count aca sudu oigulo dekhte cai then
    //     if(cnt[i]!=0){
    //     printf("%c %d\n",i+'a',cnt[i]);
    //     }
    // }

    // jodi jei format e input dewa aca oi format e output dekhte cai then
    for (int i = 0; i < strlen(a); i++)
    {
        int value = a[i]-'a';
        // printf("%c %d\n",value+97,cnt[value]); // sb value dekhanor jnno
        //jdi jei count gulo dekhano hoice oiglo bade baki gulo dekhabo
        if(cnt[value]!=0)
        {
        printf("%c %d\n",value+97,cnt[value]);

        }
        cnt[value] = 0;
    }

    return 0;
}