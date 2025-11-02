#include<stdio.h>
int main(){
    char n[20];
    gets(n); // Using "gets(variable);" to take input
    printf("1. %s\n",n);

    fgets(n,20,stdin); // Another way." fgets(variable,size,stdin) "
    printf("2. %s\n",n);
    return 0;
}