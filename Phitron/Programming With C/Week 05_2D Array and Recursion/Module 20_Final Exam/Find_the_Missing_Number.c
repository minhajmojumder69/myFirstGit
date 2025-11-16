#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        long long int m,n1,n2,n3;
        scanf("%lld %lld %lld %lld",&m,&n1,&n2,&n3);
        long long int multi = n1*n2*n3;
        long long int ans= m/multi;
        if (m%multi==0)
        {
            if (ans<0)
            {
                ans*(-1);
                printf("%lld\n",ans);
            }
            else
            {
                printf("%lld\n",ans);
            }
        
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}