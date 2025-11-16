#include<stdio.h>
int rec(int n)
{
    if (n==1)
    {
        return 1;
    }
    
    long long int multi= rec(n-1);
    long long int ans= n*multi;
    return ans;
}
int main(){
    int n;
    scanf("%d",&n);
    long long int ans =rec(n);
    printf("%lld",ans);
    return 0;
}