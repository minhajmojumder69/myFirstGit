#include<stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    for (long long int i = 1; i <= n; i++)
    {
        if (n>0 && n<=10000)
        {
            if (i%3==0 && i%7==0)
        {
            printf("%lld\n",i);
        }
        }
        
        
    }
    
    
    return 0;
}