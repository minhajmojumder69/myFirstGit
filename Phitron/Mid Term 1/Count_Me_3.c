#include<stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    char ar[10001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",ar);
        int capital = 0;
        int small = 0;
        int nmbr = 0;
        for (int i = 0; ar[i]!='\0'; i++)
    {
    
        if (ar[i]>= 'A' && ar[i]<= 'Z')
        {
            capital++;
        }
        else if (ar[i]>= 'a' && ar[i]<= 'z')
        {
            small++;
        }
        else if (ar[i]>= '0' && ar[i]<= '9')
        {
            nmbr++;
        }
    
    }
        printf("%d %d %d\n",capital,small,nmbr);
    }
   
    return 0;
}