/*
 
 Carlos Reyes / Lab 15
 CIS 231 / Cuesta College
 November 17, 2014
 
*/

 
#include <stdio.h>
#include <string.h>

struct TempInfo
{
    char city[31];
    int day_num;
    double Fahr_temp;
    double Cel_temp;
};

struct TempInfo input_TempInfo(void);
void strInput(char str[],int maxChars);
void print_TempInfo(struct TempInfo tempArray[], int i);

int main(int argc, const char * argv[]) {
    int i, info_sets, k;
    
    struct TempInfo tempArray[20];
    
    printf("Please enter the amount of sets of info you would like to use from 1 to 20:");
    scanf("%i", &info_sets);
    
    while(info_sets<1 || info_sets>20)
    {
        printf("Invalid Please reenter the amount of sets of info you would like to use from 1 to 20:");
        scanf("%i", &info_sets);
    }
    
    for(k=0; k<info_sets; k++)
    {
        tempArray[k] = input_TempInfo();
    }
    
    printf("\n                        Temperature Data Info\n\n");
    
    for(i=0; i<info_sets; i++)
    {
    print_TempInfo(tempArray, i);
    }
    
    return 0;
}

struct TempInfo input_TempInfo(void)
{
    struct TempInfo hold;
    int maxChars= 31;
    
    while(getchar() != '\n')
        ;
    strInput(hold.city, maxChars);
    
    printf("\nPlease enter the day number between from 1 to 366 here: ");
    scanf("%i", &hold.day_num);
    
    while(hold.day_num < 1 || hold.day_num > 366)
    {
        printf("Please reenter the day number between from 1 to 366 here: ");
        scanf("%i", &hold.day_num);
    }
    
    printf("Please enter a Fahrenheit temperature here: ");
    scanf("%lf", &hold.Fahr_temp);
    
    hold.Cel_temp = (hold.Fahr_temp - 32) * (5.0/9.0);

    return hold;
}

void strInput(char str[],int maxChars)
{
    int i=0, length;
    printf("Enter city here: ");
    
    while((str[i]=getchar()) != '\n')
        i++;
    
    if(i>maxChars)
    {
        length=maxChars;
        str[length++]= '\0';
        
    }
    else
    {
        length=i;
        str[length++]= '\0';
    }
}

void print_TempInfo(struct TempInfo tempArray[], int i)
{
    printf("City: %s   day: %i   Fahrenheit Temperature: %.1lf   Celsius Temperature: %.1lf\n\n", tempArray[i].city, tempArray[i].day_num, tempArray[i].Fahr_temp, tempArray[i].Cel_temp);
}