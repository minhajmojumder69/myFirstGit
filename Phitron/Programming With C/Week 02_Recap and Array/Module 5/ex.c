#include <stdio.h>

int main() {
    int x, y;
    
    // Read the two numbers from the user
    scanf("%d %d", &x, &y);
    
    // Calculate and print the sum
    printf("%d + %d = %d\n", x, y, x + y);
    
    // Calculate and print the product
    printf("%d * %d = %d\n", x, y, x * y);
    
    // Calculate and print the difference
    printf("%d - %d = %d\n", x, y, x - y);
    
    return 0;
}