#include<stdio.h>
void fun(int a,int b)
{
    if (a==b)
    {
        return;
    }
    
    printf("%d\n",b);
    fun(a,b-1);
}
int main()
{
    int a=0,b;
    scanf("%d",&b);
    fun(a,b);
    return 0;
}