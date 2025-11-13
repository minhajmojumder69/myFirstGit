#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = 0,j=n-1; i <= j; i++,j--)
    {
        if (i<j)
        {
            printf("%d %d ",ar[i],ar[j]);
        }
        else
        {
            printf("%d",ar[i]);
        }
 
    }

    return 0;
}