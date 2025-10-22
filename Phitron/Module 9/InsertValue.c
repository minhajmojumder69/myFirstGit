#include<stdio.h>
int main(){
    int n,ind,val;
    scanf("%d",&n);
    int ar[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&ind);
    scanf("%d",&val);
    for (int i = n; i >= ind + 1; i--)
    {
        ar[i] = ar[i-1];
    }
    ar[ind]= val;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    
    return 0;
}