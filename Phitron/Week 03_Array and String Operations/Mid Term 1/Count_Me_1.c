#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int c2=0,c3=0;
    for (int i = 0; i < n; i++)
    {
        
        if ((ar[i])%2==0)
        {
            c2++;
            
        }
        if(ar[i]%2!=0 && ar[i]%3==0)
        {
            c3++; 
        }
        
    }
    printf("%d %d\n",c2,c3);
    
    return 0;
}