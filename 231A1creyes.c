/*

    Carlos Reyes
    CIS 231/ Assignment 1
    Cuesta College / R. Scovil
    September 21, 2014
 
*/

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int f_1, f_2, f_3, f_4, f_5;
    double f_average;
    double c_1, c_2, c_3, c_4, c_5;
    double c_average;
    
    printf("Enter 5 Fahrenheit temperatures here: ");
    scanf("%i %i %i %i %i", &f_1, &f_2, &f_3, &f_4, &f_5);
    
    printf("\nThe five Fahreneit temperatures entered are: \n%i %4i %4i %4i %4i\n\n", f_1, f_2, f_3, f_4,f_5);
    
    c_1 = (f_1 - 32) * (double)5 / 9;
    c_2 = (f_2 - 32) * (double)5 / 9;
    c_3 = (f_3 - 32) * (double)5 / 9;
    c_4 = (f_4 - 32) * (double)5 / 9;
    c_5 = (f_5 - 32) * (double)5 / 9;
    
    printf("Fahrenheit temperatures converted to Celsius are: \n%.1lf %.1lf %.1lf %.1lf %.1lf\n\n", c_1,
           c_2, c_3, c_4, c_5);
    
    f_average =(f_1 + f_2 + f_3 + f_4 + f_5)/5;
    
    printf("The average of the Fahrenheit temperatures is:\n%.1lf\n\n", f_average);
    
    c_average = (c_1 + c_2 + c_3 + c_4 + c_5)/5;
    
    printf("The average of the Celsius temperatures is:\n%.1lf\n\n", c_average);
    
    return 0;
}

