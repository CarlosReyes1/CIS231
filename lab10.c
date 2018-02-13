/*
 lab 10
 Carlos Reyes
 CIS231 / CUESTA COLLEGE
*/

#include <stdio.h>

int main(int argc, const char * argv[])
{

    double carlos[25];
    int a;
    double carlos_sum = 0;
    double carlos_average;
    int carlos_greater = 0;
    int carlos_less = 0;
    int carlos_equal = 0;
    double max = carlos[0];
    double min = carlos [0];
    printf("Enter 25 values here: ");
    
    for (a=0; a<25; a+=1)
    {
        scanf("%lf", &carlos[a]);
    }
    
    printf("\nThe numbers of the array in order are:\n");
    
    for (a=0; a<25; a+=1)
    {
        printf("%.1lf ", carlos[a]);
    }
    
    printf("\n\nThe numbers of the array in reverse order are:\n");
    
    for (a=24; a>=0; a-=1)
    {
        printf("%.1lf ", carlos[a]);
        carlos_sum = carlos_sum + carlos[a];
    }
    
    carlos_average = carlos_sum/25;
    printf("\n\nThe average of the array is: %.1lf\n\n", carlos_average);
    
    for (a=0; a<25; a+=1)
    {
        if (carlos[a] > carlos_average)
            carlos_greater = carlos_greater + 1;
        
        else if (carlos[a] < carlos_average)
            carlos_less = carlos_less + 1;
        else
            carlos_equal = carlos_equal + 1;
    }
    
    printf("There are %i number(s) greater than the average\n\n", carlos_greater);
    
    printf("There are %i number(s) less than the average\n\n", carlos_less);
    
    printf("There are %i number(s) equal to the average\n\n", carlos_equal);
    
    for (a=0; a<25; a+=1)
    {
        if (carlos[a]>max)
            max = carlos[a];
        if (carlos[a]<min)
            min = carlos[a];
    }
    
    printf("The maximum array value is %.1lf \n\nThe minimum array value is %.1lf\n\n", max, min);
    return 0;
}


 /*
    The importance of using an array is to allow a user to store and keep track of many different numbers, so that these numbers can be used or called back when needed without using a variable for every number.
 */

