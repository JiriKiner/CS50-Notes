#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompts user for x
    double x = get_double("x: ");
    
    // Prompts user for y
    double y = get_double("y: ");
    
    // Perform division
    printf("x / y = %.50f\n", x / y);
}
