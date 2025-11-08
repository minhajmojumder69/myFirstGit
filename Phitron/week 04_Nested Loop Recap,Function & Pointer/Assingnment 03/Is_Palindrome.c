#include<stdio.h>
int is_palindrome(char ar[])
{
    int lg= strlen(ar);
    int sp= 1;
    for (int i = 0,j= lg-1; i <=j ; i++,j--)
    {
        if (ar[i]!=ar[j])
        {
            sp= 0;
            break;
        }
        
    }
    return sp;
}
int main(){
    char ar[1001];
    scanf("%s",ar);
    int sp = is_palindrome(ar);
    if (sp==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    
    
    return 0;
}