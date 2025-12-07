#include <stdio.h>
int main()
{
    int n;
    int flag = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if (ar[i] > 0)
        {
            if (ar[i] == 1)
            {
                flag++;
            }
            else
            {
                int is_prime = 1;
                for (int j = 2; j < ar[i]; j++)
                {
                    if (ar[i] % j == 0)
                    {
                        is_prime = 0;
                        break;
                    }
                }
                if (is_prime == 1)
                {
                    flag++;
                }
            }
        }
    }

    printf("%d", flag);

    return 0;
}
