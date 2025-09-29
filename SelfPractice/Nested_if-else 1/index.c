#include<stdio.h>
int main()
{
    int x;
    printf ("Enter a number");
    scanf ("%d",&x);
    if (x%3==0 || x%5==0)
    {
        if (x%15 != 0)
        {
            printf("This number is disible by 3 or 5 but not disible by 15");
        }
        else
        {
            printf("This number is disible by 3 or 5 and also disible by 15");
        }
    }
    else
    {
        printf("This number is not disible by 3 or 5");
    }


                                                        // Another Way to slove this//
    // if ((x%3==0 || x%5==0) && x%15!=0)
    // {
    //     printf("This number is disible by 3 or 5 but not disible by 15");
    // }
    // else
    // {
    //     printf("This number is not disible by 3 or 5");
    // }

    return 0;
}
