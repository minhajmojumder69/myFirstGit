#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = 0, j= n-1; i <=j; i++,j--)
    {
        int sp= ar[i];
        ar[i]=ar[j];
        ar[j]= sp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    
    return 0;
}