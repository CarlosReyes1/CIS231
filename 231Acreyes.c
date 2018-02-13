/*
 
 Lab 11
 Carlos Reyes 
 CIS231 / CUESTA COLLEGE

*/

#include <stdio.h>

void input_nums(double c[], int numValues);
void in_order(double c[], int numValues);
void rev_order(double c[], int numValues);
void abo_bel_equ(double c[], int numValues);
void hi_lo(double c[], int numValues);


int main(int argc, const char * argv[])
{
    double c[20];
    int numValues;
    
    printf("How many doubles would you like to use (1-20): ");
    scanf("%i", &numValues);
    
    while (numValues>20 || numValues<1)
    {
        printf("Enter a number between 1 and 20: ");
        scanf("%i", &numValues);
    }
    
    input_nums(c, numValues);
    
    in_order(c, numValues);
    
    rev_order(c, numValues);
    
    abo_bel_equ(c, numValues);
    
    hi_lo(c, numValues);
    
    return 0;
}

void input_nums(double c[], int numValues)
{
    int a;
    
    for (a=0; a<numValues; a++)
    {
        printf("Enter c[%i] here: ", a);
        scanf("%lf", &c[a]);
    }
    
    
}

void in_order(double c[], int numValues)
{
    int a;
    
    printf("\nThese are the array values in order\n\n");
    
    for (a=0; a<numValues; a++)
    {
        printf("c[%i] %.1lf ", a, c[a]);
    }
}

void rev_order(double c[], int numValues)
{
    int a;
    
    printf("\n\nThese are your array values in reverse order\n\n");
    
    for (a=numValues-1; a>=0; a--)
    {
        printf("c[%i] %.1lf ", a, c[a]);
    }
    
}

void abo_bel_equ(double c[], int numValues)
{
    int a;
    double sum=0;
    double ave=0;
    int abo=0;
    int bel=0;
    int equ=0;
    
    for (a=0; a<numValues; a++)
    {
        sum=sum+c[a];
    }
    
    ave= sum/numValues;
    
    printf("\n\nThe average of the array is %lf\n\n", ave);
    
    for (a=0; a<numValues; a++)
    {
        if (c[a]>ave)
            abo++;
        else if(c[a]<ave)
            bel++;
        else
            equ++;
    }
    
    printf("There's %i number(s) above the average\n\n", abo);
    
    printf("There's %i number(s) below the average\n\n", bel);
    
    printf("There's %i number(s) equal to the average\n\n", equ);
}

void hi_lo(double c[], int numValues)
{
    int a;
    double hig=c[0];
    double low=c[0];
    
    for(a=0; a<numValues; a++)
    {
        if (c[a]>hig)
            hig=c[a];
        
        if (c[a]<low)
            low=c[a];
    }
    printf("The highest value in the array is %.1lf\n\n", hig);
    
    printf("The lowest value in the array is %.1lf\n\n", low);
}