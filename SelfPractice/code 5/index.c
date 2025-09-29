#include<stdio.h>
int main()
{
float marks,credits,cg;
printf ("enter marks");
scanf ("%f",&marks);
printf ("enter credits");
scanf ("%f",&credits);
printf ("enter cg");
scanf ("%f",&cg);

float Cgpa= marks*credits*cg;
printf("Result: %f",Cgpa);

    return 0;
}