#include<stdio.h>
void fun(int ar[],int x)
{
    for (int i = 0; i < x; i++)
    {
        ar[i]= i+1;
    }
    int i=0;
    do
    {
        printf("%d ",ar[i]);
        i++;
    } while (i < x);
    
}
int main(){

    int x;
    scanf("%d",&x);
    int ar[x];
    fun(ar,x);

    return 0;
}