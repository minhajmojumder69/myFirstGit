#include<stdio.h>
int main(){
    int n;
    scanf ("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int x;
    scanf("%d",&x);
    int y=0;  //Flag variable method.
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((ar[i] + ar[j]) == x)
            {
                y = 1;
                printf("YES : %d + %d = %d\n",ar[i],ar[j],x);
            }
        }
    }
    if (y == 0)
    {
        printf("NO\n");
    }
    return 0;
} 