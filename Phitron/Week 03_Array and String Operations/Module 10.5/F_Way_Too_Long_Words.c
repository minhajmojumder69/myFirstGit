#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char ar[101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",ar);
        int ln= strlen(ar);
        if (ln>10)
        {
            printf("%c%d%c\n",ar[0],ln-2,ar[strlen(ar)-1]);
        }
        else
        {
            printf("%s\n",ar);
        }
        
    }
   
    return 0;
}