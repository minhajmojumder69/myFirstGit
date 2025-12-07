#include<stdio.h>
int main()
{
    float A;
    scanf("%f",&A);
    if (0.00<=A && A<=5.00)
    {
        printf("batash\n");
    }
    else if(5.00<A && A<=12.00)
    {
        printf("kuddus\n");
    }
    else if (A>12.00)
    {
        printf("palao\n");
    }
    
    return 0;
}