#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int d =-1;
    scanf("%d",&x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
    {
        d = i;
        break;
    }
    
    }
    printf("%d ",d);

    return 0;
}