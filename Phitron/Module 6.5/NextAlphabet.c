#include<stdio.h>
int main(){
    char ch;
    scanf ("%c",&ch);
    if (ch>=97 && ch<=121 )
    {
        ch+=1;
        printf("%c",ch);
    }
    else if (ch==122)
    {
        
        printf("a");
    }
 
    return 0;
}