#include<stdio.h>
int main(){
    char ar[11];
    scanf("%s",ar);
    char cr[11];
    scanf("%s",cr);
    char br[21];
    int lg1= strlen(ar);
    int lg2= strlen(cr);
    printf("%d %d\n",lg1,lg2);
    // for (int i = 0; i<11 ; i++)
    // {
    //     br[i]=ar[i];
    // }
    // for (int i = 0; i < 22; i++)
    // {
    //     br[i+lg1]= cr[i];
    // }
    for (int i = 0; i<11 ; i++)
    {
        br[i]=ar[i];
    }
    
    for (int i = 0; i < 22; i++)
    {
        br[i+lg1]= cr[i];
    }
    printf("%s\n",br);
    
    return 0;
}