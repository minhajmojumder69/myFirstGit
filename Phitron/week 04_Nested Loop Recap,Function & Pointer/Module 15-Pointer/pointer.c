#include<stdio.h>
int main(){
    int x=10;
    printf("%d\n",x);

    int* pointer; // for take input a address of a variable //
    pointer= &x;
    printf("%p",pointer); // %p for printing address //
    return 0;
}