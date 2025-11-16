#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int ar[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c ; j++)
        {
            scanf("%d",&ar[i][j]);
        }
        
    }
    for (int i = 0; i < c; i++)
    {
        printf("%d ",ar[r-1][i]);
    }
    printf("\n");
    for (int j = 0; j < r; j++)
    {
        printf("%d ",ar[j][c-1]);
    }
    
    return 0;
}