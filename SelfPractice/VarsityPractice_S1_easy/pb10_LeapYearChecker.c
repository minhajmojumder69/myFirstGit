 #include<stdio.h>
int main(){
    int x;
    scanf ("%d",&x);
    if (x%4==0 || x%400==0)
    {
        printf("Leap Year\n");
    }
    else
    {
         printf("Not Leap Year\n");
    }
    
    return 0;
}