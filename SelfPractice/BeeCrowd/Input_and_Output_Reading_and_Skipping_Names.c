#include<stdio.h>
int main()
{
    int ar[10];
    for (int i = 1; i <= 10; i++)
    {
        char ar[i][101];
        scanf("%s",ar);
    }
    printf("%d",ar[3]);
    
    return 0;
}