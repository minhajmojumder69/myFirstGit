#include<stdio.h>
void fun(int a,int b)
{
    if (a==b)
    {
        return;
    }
    fun(a+1,b);
    printf("%d",a+1);
    if (a!=0)
    {
        printf(" ");
    }

}
int main()
{
    int b;
    scanf("%d",&b);
    fun(0,b);
    return 0;
}