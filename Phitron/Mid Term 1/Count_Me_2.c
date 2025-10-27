#include<stdio.h>
#include<string.h>
int main(){
    char st[100001];
    scanf("%s",&st);
    int con = strlen(st);
    int vow=0;
    for (int i = 0; st[i]!='\0' ; i++)
    {
        if (st[i]==97 || st[i]==101 || st[i]==105 || st[i]== 111 || st[i]==117)
        {
            vow++;
        }
        
    }
    con = con- vow;
    printf("%d\n",con);
    
    return 0;
}