#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = x-1 ; i >= 1; i--)
    {
        if (i%2 != 0 && i!=0)
        {
            printf("%d ",ar[i]);
        }
        
    }

    return 0;
}