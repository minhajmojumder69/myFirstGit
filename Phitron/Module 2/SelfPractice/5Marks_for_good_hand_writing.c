#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(-1<= N && N <= 100)
    {
        N=N+5;
        printf("%d\n",N);
    }
    return 0;
}