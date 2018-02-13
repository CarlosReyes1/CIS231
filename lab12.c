/*
 
 Lab 12
 Carlos Reyes
 Cuesta College / CIS 231
 
*/

#include <stdio.h>
void sortThree(int *a, int *b, int *c);
int main(int argc, const char * argv[]) {
    int a,b, c;
    
    printf("Enter values for a, b, and c here: ");
    scanf("%i %i %i", &a, &b, &c);
    
    sortThree(&a, &b, &c);
    printf("Values in ascending order a=%i b=%i c=%i", a, b, c);
    
    return 0;
}
void sortThree(int *a, int *b, int *c)
{
    int hold, i;
    for (i=0; i<3; i++)
    {
        if (a>b)
            hold=*a;
            *a=*b;
            *b=hold;
        else if (a>c)
            hold=*a;
            *a=*b;
            *b=hold;
        else if (b>c)
            hold=*a;
            *a=*b;
            *b=hold;
    }
}