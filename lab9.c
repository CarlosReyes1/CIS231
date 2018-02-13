/*
    Lab 9
    CIS 231/ Cuesta College
    Carlos Reyes
*/

#include <stdio.h>

double getInput();

double halve(double input);

void printInput(double input);

int main(void)
{
    double input;
    
    input = getInput();
    
    input = halve(input);
    
    printInput(input);
    
    
    return 0;
}

double getInput()
{
    double num;
    
    printf("Enter value for num here:");
    scanf("%lf", &num);
    
    return (num);
}

double halve(double input)
{
    double halve;
    halve = input/2;
    return (halve);
}

void printInput(double input)
{
    printf("Dividing input by 2 is: %.1lf\n", input);
}