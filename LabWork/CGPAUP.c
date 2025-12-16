#include <stdio.h>

void sgpa_counter()
{
    printf("\n*Enter Your Total Course Number*\n");
    int course;
    scanf("%d", &course);
    float credit_count = 0;
    int sum = 0;
    for (int i = 1; i <= course; i++)
    {
        printf("Enter Your Grade Point and Credit of %dst/nd course\n", i);
        float point, credit;
        scanf("%f %f", &point, &credit);
        credit_count += credit;
        sum += (point * credit);
    }
    float sgpa = sum / credit_count;
    printf("**Your SGPA is: %.2f**", sgpa);
}

void cgpa_counter()
{
    printf("\n*Enter Your Total Semester Number*\n");
    int semester;
    scanf("%d", &semester);
    float credit_count = 0;
    int sum = 0;
    for (int i = 1; i <= semester; i++)
    {
        printf("\nEnter Your Grade Point and Credit of %dst/nd semester\n", i);
        float point, credit;
        scanf("%f %f", &point, &credit);
        credit_count += credit;
        sum += (point * credit);
        printf("%dst/nd Semester SGPA : %.2f\n", i, point);
    }
    float cgpa = sum / credit_count;
    printf("**Your Total Credit : %.2f**\n", credit_count);
    printf("**Your Total CGPA is: %.2f**\n", cgpa);
}

int main()
{
    printf("***Calculate Your CGPA/SGPA***\n");
    printf("\nPress 1,if you want to calculate SGPA\n");
    printf("Or Press 2,if you want to calculate CGPA\n");
    int option;
    scanf("%d", &option);
    if (option == 1)
    {
        sgpa_counter();
    }
    else if (option == 2)
    {
        cgpa_counter();
    }

    return 0;
}