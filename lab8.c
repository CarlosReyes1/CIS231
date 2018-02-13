//
//  main.c
//  Lab 8
//  Fall 2014 / Cuesta College
//  Carlos Reyes
//
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    int k;
    int count = 0;
    double sum = 0;
    double average;
    int a, b;
    int variable, summation;
    int factorial;
    
    printf("Enter values for k and when complete enter a negative number here: ");
    
    scanf("%i", &k);
    
    if (k <= 0)
       
        printf("No valid numbers were entered\n\n");
    
    else
    {
        do
        {
            count = count +1;
            sum = sum +k;
        
            scanf("%i", &k);
  
        }while (k >= 0);
    
        average = sum/count;
    
        printf("The sum of the values for k is %lf\n", sum);
    
        printf("%i numbers were entered\n", count);
    
        printf("The average is %.2lf\n", average);
    
    }
    
    printf("Enter up to 5 new numbers: ");
    
    for (a=0; a<5; a+=1)
    {
        scanf("%i", &variable);
        
        summation = 0;
        factorial = 1;
        
        for (b=0; b<variable; b+=1)
        {
            factorial = factorial*(variable-b);
            summation = summation + (variable-b);
        
        }
        printf("The factorial value is %i\n", factorial);
        printf("The summation value is %i\n\n", summation);
        
    }
    return 0;
}