#include<stdio.h>
int main(){
    int n,m=0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int b;
        scanf("%d",&b);
        if (m<b)
        {
            m = b;
        }
        
    }
    printf("%d",m);
    return 0;
}