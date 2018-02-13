/*
 Carlos Reyes 
 CIS 231 / Assignemtent 3
 Cuesta College / R. Scovil
 Nov. 11, 2014
*/

 

#include <stdio.h>
#include <math.h>
int get();
double fahr[40];
double cel[40];
void get_fahr(double fahr[], int amount);
void sel_sort(double fahr[], int amount);
void conv(double fahr[], int amount);
double ave(double fahr[], int amount);
void abo_equ_bel(double fahr[], int amount, double fahr_ave);
void hi_lo(double fahr[], int amount, double cel[]);
double sd(double fahr[], int amount, double ave);
void output(double fahr[], double cel[], int amount);
void print_ave(double fahr_ave, double cel_ave);

int main(int argc, const char * argv[])
{
    int amount;
    double fahr_ave, cel_ave;
    
    amount=get();
    get_fahr(fahr, amount);
    conv(fahr, amount);
    sel_sort(fahr, amount);
    sel_sort(cel, amount);
    output(fahr, cel, amount);
    fahr_ave=ave(fahr, amount);
    cel_ave=ave(cel, amount);
    print_ave(fahr_ave, cel_ave);
    hi_lo(fahr, amount, cel);
    abo_equ_bel(fahr, amount, fahr_ave);
    sd(fahr, amount, fahr_ave);
    
    return 0;
}

int get()
{
    int amount;
    
    printf("Enter the amount of temperatures you would like to use for the array from 1-40: ");
    scanf("%i", &amount);
    
    while(amount<1 || amount>40)
    {
        printf("Please renter an amount from 1-40: ");
        scanf("%i", &amount);
    }
    return amount;
}

void get_fahr(double fahr[], int amount)
{
    int i;
    
    printf("Please enter the %i temperatures you would like to use: ", amount);
    
    for(i=0; i<amount; i++)
    {
        scanf("%lf", &fahr[i]);
        while(fahr[i]<-200 || fahr[i]>300)
        {
            printf("Please reenter temperature value for array fahr[%i]: ", i);
            scanf("%lf", &fahr[i]);
        }
        
    }
}

void sel_sort(double fahr[], int amount)
{
    int a, b, hold, swap;
    
    for(a=0; a<amount; a++)
    {
        hold=a;
        
        for(b=a+1; b<amount; b++)
        {
            if(fahr[hold]>fahr[b])
                hold=b;
        }
        
        if(hold != a)
        {
            swap = fahr[a];
            fahr[a] = fahr[hold];
            fahr[hold] = swap;
        }
    }
}

void output(double fahr[], double cel[], int amount)
{
    int i;
    
    printf("\n       CIS 231 - Assignment 3 - Carlos Reyes\n\n");
    printf("                         Fahr          Cels\n");
    printf("                       =======       =======\n");
    for(i=0; i<amount; i++)
    {
        printf("%28.1lf %14.1lf\n", fahr[i], cel[i]);
    }
    printf("                       =======       =======\n");
}


void conv(double fahr[], int amount)
{
    int i;
    
    for(i=0; i<amount; i++)
    {
        cel[i]=(5.0/9.0)*(fahr[i]-32);
    }
}

void abo_equ_bel(double fahr[], int amount, double fahr_ave)
{
    int i, abo_f=0, bel_f=0, equ_f=0;

    for(i=0; i<amount; i++)
    {
        if(fahr[i]>fahr_ave)
            abo_f++;
        else if(fahr[i]<fahr_ave)
            bel_f++;
        else
            equ_f++;
    }
    printf("Above Average: %11i\n", abo_f);
    printf("Below Average: %11i\n", bel_f);
    printf("Equal to Average: %8i\n\n", equ_f);
}

double ave(double fahr[], int amount)
{
    int i;
    double sum=0, ave=0;
    
    for(i=0; i<amount; i++)
    {
        sum=sum+fahr[i];
    }
    ave= sum/amount;
    
    return ave;
}

void print_ave(double fahr_ave, double cel_ave)
{
    printf("Average: %19.1lf %14.1lf\n\n", fahr_ave, cel_ave);
}


void hi_lo(double fahr[], int amount, double cel[])
{
    int i;
    double hig_f=fahr[0], low_f=fahr[0], hig_c=cel[0], low_c=cel[0];
    
    for(i=0; i<amount; i++)
    {
        if(fahr[i]>hig_f)
            hig_f=fahr[i];
        
        if(fahr[i]<low_f)
            low_f=fahr[i];
    }
    
    for(i=0; i<amount; i++)
    {
        if(cel[i]>hig_c)
            hig_c=cel[i];
        
        if(cel[i]<low_c)
            low_c=cel[i];
    }
    
    printf("High: %22.1lf %14.1lf\n\n", hig_f, hig_c);
    printf("Low: %23.1lf %14.1lf\n\n", low_f, low_c);
    
}
    
double sd(double fahr[], int amount, double ave)
{
    int i;
    double sd_sum=0,sd=0;
    
    for(i=0; i<amount; i++)
    {
        sd_sum=sd_sum+(fahr[i]-ave)*(fahr[i]-ave);
    }
    sd=sqrt(sd_sum/(amount-1));
    printf("Standard Deviation: %8.1lf\n", sd);
    
    return sd;
}

