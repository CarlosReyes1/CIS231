/*
 
 Carlos Reyes
 CIS231 / Assignment 2
 Cuesta College / R. Scovil
 October 5, 2014
 
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    double amount;
    int val_1, val_2, val_3, val_4, val_5,val_6, val_7, val_8;
    int end;
    
    do
    {
        printf("Carlos Reyes - Assignment 2 - Change-O-Matic\n\n");
    
        printf("Enter a dollar amount from $0-$200 here: ");
        scanf("%lf", &amount);
        
            do
            {
                printf("Invalid value input please enter a new value: ");
                scanf("%lf", &amount);
        
            }while (amount<0 || amount>200);
    
        amount = (int)(amount * 100)/ (double)100;
        
        printf("\nAmount entered: $%.2lf\n", amount);
    
    
        val_1 = amount/20;
    
        if (val_1==1)
        {
            printf("%i $20.00\n", val_1);
        }

        else if(val_1 > 1)
        {
            printf("%i $20.00s\n", val_1);
        }
    
        amount = amount - val_1*20;
        val_2 = amount/10;

        if (val_2==1)
        {
            printf("%i $10.00\n", val_2);
        }
    
        else if(val_2 > 1)
        {
            printf("%i $10.00s\n", val_2);
        }
    
        amount = amount - val_2*10;
        val_3 = amount/5;

        if (val_3==1)
        {
            printf("%i $5.00\n", val_3);
        }
    
        else if(val_3 > 1)
        {
            printf("%i $5.00s\n", val_3);
        }
        
        amount = amount - val_3*5;
        val_4 = amount/1;

        if (val_4==1)
        {
            printf("%i $1.00\n", val_4);
        }
    
        else if(val_4 > 1)
        {
            printf("%i $1.00s\n", val_4);
        }
    
        amount = amount - val_4*1;
        val_5 = amount/.25;
    
        if (val_5==1)
        {
            printf("%i   .25\n", val_5);
        }
    
        else if(val_5 > 1)
        {
            printf("%i   .25s\n", val_5);
        }
    
        amount = amount - val_5*.25;
        val_6 = amount/.10;
    
        if (val_6==1)
        {
            printf("%i    .10\n", val_6);
        }
    
        else if(val_6 > 1)
        {
            printf("%i    .10s\n", val_6);
        }
    
        amount = amount - val_6*.10;
        val_7 = amount/.05;
    
        if (val_7==1)
        {
            printf("%i    .05\n", val_7);
        }
    
        else if(val_7 > 1)
        {
            printf("%i    .05s\n", val_7);
        }
    
        amount = amount - val_7*.05;
        val_8 = amount/.01;
        
        /* 
        for some reason certain values entered dropped a penny but I could not figure out the problem. I know this will result in a deduction of points but it would be extremely helpful if you could briefly explain what I did wrong. Thank you
         */
    
        if (val_8==1)
        {
            printf("%i    .01\n", val_8);
        
        }
    
        else if(val_8 > 1)
        {
        
            printf("%i    .01s\n", val_8);
        
        }
        
        printf("Enter 0 to end the program or enter 1 to continue: ");
        scanf("%i", &end);
        
    }while(end==1);
    
    return 0;
    
}