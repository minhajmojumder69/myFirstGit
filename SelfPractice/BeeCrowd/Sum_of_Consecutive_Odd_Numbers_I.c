#include <stdio.h>
int main() 
{
    int n, m;
    int sum = 0;
    int min, max;
    scanf("%d %d", &n, &m);

    if (n < m) 
    {
        min = n;
        max = m;
    }
    else
    {
        min = m;
        max = n;
    }
    for (int i = min + 1; i < max; i++) 
    {
        if (i % 2 != 0) 
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
    return 0;
}