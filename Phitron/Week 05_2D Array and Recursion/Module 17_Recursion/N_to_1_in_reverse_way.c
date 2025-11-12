#include<stdio.h>
void fun(int a,int b)
{
    if (a==b)
    {
        return;
    }
    fun(a+1,b);
    printf("%d\n",a);

}
int main()
{
    int a=1,b;
    scanf("%d",&b);
    fun(a,b);
    return 0;
}