#include<stdio.h>
int main(){
    int x,i;
    scanf("%d",&x);
    int ar[x];
    for ( i = 0; i < x; i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&i);
    scanf("%d",&ar[i]);
    for ( i = x-1 ; i >= 0; i--)
    {
        printf("%d ",ar[i]);
    }
    
    
    return 0;
}