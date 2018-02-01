//
//  Sample Program to test Part A of Lab 3
//  CIS 231 / Cuesta College
//  R. Carlos / reyes_carlos1@yahoo.com
//

#include <stdio.h>

int main(void)
{

    int a = 2, c = 3;
    double b = 4.7, d = 4.2;
    
    int answer1 = b + a / c - d;
    double answer2 = (a+b) / c - d;
    int answer3 = d * -b - (double) (c / a);
    double answer4 = a - b * (c % (int) d);
    double answer5 = d / a++ + (b * --c);
    
    printf("answer1 is %i/n", answer1);
    printf("answer2 is %.2lf\n", answer2);
    printf("answer3 is %i\n", answer3);
    printf("answer4 is %.2lf\n", answer4);
    printf("answer5 is %.2lf\n", answer5);
    
    return 0;
}

