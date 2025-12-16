#include <stdio.h>
#include <stdlib.h>

struct Data
{
    float point;
    float credit;
};

void sgpa_counter()
{
    printf("\n*Enter Your Total Course Number*\n");
    int course;
    scanf("%d", &course);
    struct Data totalsgpa;
    float credit_count = 0;
    float sum = 0;

    for (int i = 1; i <= course; i++)
    {
        printf("\nEnter Your Grade Point and Credit of %dst/nd course\n", i);
        scanf("%f %f", &totalsgpa.point, &totalsgpa.credit);
        credit_count += totalsgpa.credit;
        sum += (totalsgpa.point * totalsgpa.credit);
    }

    float sgpa = sum / credit_count;
    printf("**Your SGPA is: %.2f**\n", sgpa);

    FILE *fptr;
    fptr = fopen("cgpa_history.txt", "a");
    if (fptr != NULL)
    {
        fprintf(fptr, "SGPA Calculation: %.2f\n", sgpa);
        fclose(fptr);
        printf("(Information Saved)\n");
    }
}

void cgpa_counter()
{
    printf("\n*Enter Your Total Semester Number*\n");
    int semester;
    scanf("%d", &semester);
    struct Data totalcgpa;
    float credit_count = 0;
    int sum = 0;

    for (int i = 1; i <= semester; i++)
    {
        printf("\nEnter Your Grade Point and Credit of %dst/nd semester\n", i);
        scanf("%f %f", &totalcgpa.point, &totalcgpa.credit);
        credit_count += totalcgpa.credit;
        sum += (totalcgpa.point * totalcgpa.credit);
        printf("%dst/nd Semester SGPA : %.2f\n", i, totalcgpa.point);
    }

    float cgpa = sum / credit_count;
    printf("**Your Total Credit : %.2f**\n", credit_count);
    printf("**Your Total CGPA is: %.2f**\n", cgpa);

    FILE *fptr;
    fptr = fopen("cgpa_history.txt", "a");
    if (fptr != NULL)
    {
        fprintf(fptr, "CGPA Calculation: %.2f \n(Total Credit: %.2f)\n", cgpa, credit_count);
        fclose(fptr);
        printf("(Information Saved)\n");
    }
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