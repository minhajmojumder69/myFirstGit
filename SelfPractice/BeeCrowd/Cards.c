#include<stdio.h>
int main()
{
    int in= 0;
    int dn= 0;
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        
        if (ar[i] < ar[i+1])
        {
            in++;
        }
        if (ar[i] > ar[i+1])
        {
            dn++;
        }

    }
    if (in==4)
    {
        printf("C\n");
    }
    else if (dn==4)
    {
        printf("D\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}