#include<stdio.h>
int main(){
    char a[40];
    gets(a);
    int ln=0;
    for (int i = 0; a[i] != '\0' ; i++)
    {
        ln++;
    }
    
    printf("%d",ln);

    return 0;
}