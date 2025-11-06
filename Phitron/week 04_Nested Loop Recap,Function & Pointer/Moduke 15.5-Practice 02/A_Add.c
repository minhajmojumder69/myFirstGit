#include<stdio.h>
int fun(int x,int y)
{
    int sum = x+y;
    return sum;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int sum = fun(x,y);
    printf("%d\n",sum);

    return 0;
}