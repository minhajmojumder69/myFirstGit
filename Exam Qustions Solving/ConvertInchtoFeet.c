#include<stdio.h>
int main(){
    int inch;
    scanf("%d",&inch);
    int feet= inch/12;
    int feet1= inch%12;
    if (feet1>0)
    {
        printf("Your height is %d feet %d inches",feet,feet1);
    }
    else
    {
        printf("Your height is %d feet",feet);
    }
    
    return 0;
}