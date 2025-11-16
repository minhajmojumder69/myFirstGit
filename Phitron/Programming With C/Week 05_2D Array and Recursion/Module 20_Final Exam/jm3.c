#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int flag= 1;
    if (r!=c)
    {
        printf("NO");
    
    }
    else
    {
        int ar[r][c];
    
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ar[i][j]);
            
                if (i == j) 
                {
                    if (ar[i][j] != 1)
                    {
                        flag= 0;
                    }
                    else if (i+j == r-1 )
                    {
                        if (ar[i][j] != 1)
                        {
                            flag=0;
                        }
                    }
                    else
                    {
                        if (ar[i][j] != 0)
                        {
                            flag=0;
                        }
                    }
                    

                }
                else
                {
                    flag= 1;
                }
                
        
            
        }
    }
    }
    

    if (flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
   
    return 0;
}

