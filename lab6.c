/*
  main.c
  Lab 6
  Cis 231 / Cuesta College
  Fall 2014 / R. Scovil
  Carlos Reyes
*/

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{

    double a , b;
    
    printf("Input value for (a) here:");
    scanf("%lf", &a);
    
    printf("\nInput value for (b) here:");
    scanf("%lf", &b);
    
    double c = pow(a, 2) + pow(b, 2);
    double d = sqrt(c);
    
    printf("\nThe value for (c) is:%.2lf\n\n", d);
    

    return 0;
}

