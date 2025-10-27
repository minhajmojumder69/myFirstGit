#include<stdio.h>
int main(){
    char ar[10001];
    scanf("%s",ar);
    
    int fr[26]={0};
    for (int i = 0; ar[i]!='\0' ; i++)
    {
        int cr = ar[i] - 'a';
        fr[cr]++;
    
    }
    for (int i = 0; i < 26; i++)
    {
        char cr = i+'a';
        if (fr[i]>0)
        {
            printf("%c - %d\n",cr,fr[i]);
        }
        
        
    }
    
    return 0;
}