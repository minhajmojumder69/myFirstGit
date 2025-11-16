#include<stdio.h>
int main(){
    char ar[100001];
    scanf("%s",ar);
    for (int i = 0; ar[i]!='\0' ; i++)
    {
        if (ar[i]==',')
        {
            ar[i]= ' ';
            
        }
        if(ar[i]>=65 && ar[i]<=122)
        {
            if(ar[i]>='a' && ar[i]<='z')
            {
                ar[i]= ar[i]-32;
            
            }
            else{
                ar[i]= ar[i]+32;
            }
            
        }
       
    }
    printf("%s",ar);
    
    return 0;
}