#include<stdio.h>
int main(){
    int x,y;
    long long int sm,mu,sb;
    scanf("%d %d",&x,&y);
    sm= x+y;
    mu= x*y;
    sb= x-y;
    printf("%d + %d = %lld\n",x,y,sm);
    printf("%d * %d = %lld\n",x,y,mu);
    printf("%d - %d = %lld\n",x,y,sb);

    return 0;
}