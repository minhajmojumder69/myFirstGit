#include<stdio.h>
int main(){
    int n,first=1;
    scanf("%d",&n);
    int space= n-1;
    for (int i = 1; i <= n-1; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= first; j++)
        {
            if (i%2!=0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
            
            
        }
        printf("\n");
        first+=2;
        space--;
    }
    int end= (n*2)-1;
    if (n%2==0)
    {
        for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i-1; k++)
        {
            printf(" ");
        }
        for (int j = end; j >= i; j--)
        {
            if (i%2!=0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        end--;
       
    }
    }
    else
    {
        for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i-1; k++)
        {
            printf(" ");
        }
        for (int j = end; j >= i; j--)
        {
            if (i%2==0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
        end--;
       
    }
    }

    return 0;
}