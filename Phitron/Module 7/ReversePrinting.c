#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int nm[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&nm[i]);
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",nm[i]);
    }
    
    
    return 0;
}