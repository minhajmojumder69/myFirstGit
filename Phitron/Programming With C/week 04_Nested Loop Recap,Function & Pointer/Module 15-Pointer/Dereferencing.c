#include<stdio.h>
int main(){
    int x=10;
    printf("%d\n",x);
    
    int* address= &x;
    printf("%d\n",address);

    *address = 100; // changing a value by calling address //
    printf("%d\n",x);
    printf ("%d",*address);

    return 0;
}