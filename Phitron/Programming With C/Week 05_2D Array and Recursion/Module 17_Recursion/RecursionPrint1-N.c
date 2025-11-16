#include<stdio.h>
void fun(int a,int b)
{
    if (a==b)
    {
        return;
    }
    
    printf("%d\n",a);
    fun(a+1,b);
}
int main()
{
    int b;
    scanf("%d",&b);
    fun(0,b);
    return 0;
}