#include<stdio.h>
void fun(char ar[])
{
    printf("%s",ar);
}
int main(){
    char ar[10];
    scanf("%s",ar);
    fun(ar);
    return 0;
}