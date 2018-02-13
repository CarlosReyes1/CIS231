/*
 
 
    Assignment 4/ Carlos Reyes
    Fall 2014 / Cuesta College
    R.Scovil
 



    I was unable to us reallocte to dynamically store all the strings. I had the bases of it but I just could not mplement it. Also I had errors with the string when it looped the second time. For some reason when I tokenized the second string, i recieved some numbers that were not in the string. Last I could not get the txt file to work and was unsure if i should have commented all of it out, so I left it as is.
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define FILENAME "x:/231HA4CReyReport.txt"

void strInput(char str[],int maxChars);
void custatoi(char*  tokenarr[], int * data, int numtoken,FILE *sensor);
void desc_order(int* data, int numtoken);
void print_rows(int* data, int numtoken, FILE *sensor);
void high_low(int* data, int numtoken, FILE *sensor);
void ave_abo_bel_equ(int* data, int numtoken, FILE *sensor);
void neg_zero_pos(int* data, int numtoken, FILE *sensor);
void median_mode(int* data, int numtoken, FILE *sensor);


int main(int argc, const char * argv[]) {
    
    int maxChars = 81, numtoken=0, i;
    int *data;
    char str[maxChars];
    char * tokenarr[maxChars];
    FILE *sensor;
    
    sensor = fopen(FILENAME,"w");
    if(sensor == NULL)
        printf("Error opening\n");
    
    printf("                           Carlos Reyes\n\n");
    fprintf(sensor,"                           Carlos Reyes\n\n");
    
    strInput(str, maxChars);
    
    while(strlen(str))
    {
        tokenarr[i]= strtok(str, " \t");
        while((tokenarr[i] != NULL))
        {
            i++;
            tokenarr[i]=strtok(NULL, " \t");
            numtoken++;
        }
        
        data =(int *) malloc(numtoken*sizeof(int));
        
        custatoi(tokenarr, data, numtoken,sensor);
        
        desc_order(data, numtoken);
        printf("descending order:\n");
        fprintf(sensor,"descending order:\n");
        
        print_rows( data, numtoken, sensor);
        
        high_low(data, numtoken, sensor);
        
        ave_abo_bel_equ(data, numtoken, sensor);
        
        neg_zero_pos(data, numtoken, sensor);
        
        median_mode(data, numtoken, sensor);
        
        free(data);
        strInput(str, maxChars);
    }
    
    fclose(sensor);
    return 0;
}

void strInput(char str[],int maxChars)
{
    int i=0;
    char trash;
    printf("Enter a string of integers or enter a new line to quit here: ");
    
    i=0;
    while((i<maxChars)&&(str[i]=getchar()) != '\n')
        i++;
    
    if (i==81)
        while((trash = getchar()) != '\n')
            ;
    str[i]='\0';
}
void custatoi(char*  tokenarr[], int * data, int numtoken,FILE *sensor)
{
    int i;
    
    for(i=0; i<numtoken; i++)
    {
        data[i]= atoi(tokenarr[i]);
        
        printf("tokenarr[%i] is %d\n\n", i, data[i]);
        fprintf(sensor,"tokenarr[%i] is %d\n\n", i, data[i]);
    }
}

void desc_order(int* data, int numtoken)
{
    int a, b, hold, swap;
    
    for(a=0; a<numtoken; a++)
    {
        hold = a;
        for(b=a+1; b<numtoken; b++)
        {
            if(data[hold]<data[b])
                hold=b;
        }
        
        if(hold != a)
        {
            swap = data[a];
            data[a] = data[hold];
            data[hold] = swap;
        }
    }
}

void print_rows(int* data, int numtoken,FILE *sensor)
{
    int set= numtoken/5, i, k=0;
    int remainder= numtoken-(set*5);
    
    for(i=0; i<set; i++)
    {
        printf("%i, %i, %i, %i, %i\n", data[k], data[k+1], data[k+2], data[k+3], data[k+4]);
        fprintf(sensor,"%i, %i, %i, %i, %i\n", data[k], data[k+1], data[k+2], data[k+3], data[k+4]);
        k=k+5;
    }
    for(i=0; i<remainder; i++)
    {
        printf("%i, ", data[k]);
        fprintf(sensor,"%i, ", data[k]);
        k++;
    }
    printf("\n\n");
    fprintf(sensor,"\n\n");
}

void high_low(int* data, int numtoken, FILE *sensor)
{
    int i;
    int high_data=data[0], low_data= data[0];
    
    for(i=0; i<numtoken; i++)
    {
        if(data[i]>high_data)
            high_data= data[i];
        if(data[i]<low_data)
            low_data = data[i];
    }
    printf("The highest value is %i\n\n", high_data);
    fprintf(sensor,"The highest value is %i\n\n", high_data);
    
    printf("The lowest value is %i\n\n", low_data);
    fprintf(sensor,"The lowest value is %i\n\n", low_data);
}

void ave_abo_bel_equ(int* data, int numtoken, FILE *sensor)
{
    int i;
    int abo_data=0, bel_data=0, equ_data=0;
    double sum=0, ave=0;
    
    for(i=0; i<numtoken; i++)
    {
        sum=sum+data[i];
    }
    ave= sum/numtoken;
    
    for(i=0; i<numtoken; i++)
    {
        if(data[i]>ave)
            abo_data++;
        else if(data[i]<ave)
            bel_data++;
        else
            equ_data++;
    }
    
    printf("The average is %.2lf\n", ave);
    fprintf(sensor,"The average is %.2lf\n", ave);
    
    printf("Above Average: %i\n", abo_data);
    fprintf(sensor,"Above Average: %i\n", abo_data);
    
    printf("Below Average: %i\n", bel_data);
    fprintf(sensor,"Below Average: %i\n", bel_data);
    
    printf("Equal to Average: %i\n\n", equ_data);
    fprintf(sensor,"Equal to Average: %i\n\n", equ_data);
    
}

void neg_zero_pos(int* data, int numtoken, FILE *sensor)
{
    int i, neg=0, zero=0, pos=0;
    
    for(i=0; i<numtoken; i++)
    {
        if(data[i]>0)
            pos++;
        else if (data[i]<0)
            neg++;
        else
            zero++;
    }
    
    printf("There are %i positive numbers\n", pos);
    fprintf(sensor,"There are %i positive numbers\n", pos);
    
    printf("There are %i negative numbers\n", neg);
    fprintf(sensor,"There are %i negative numbers\n", neg);
    
    printf("There are %i zero numbers\n\n", zero);
    fprintf(sensor,"There are %i zero numbers\n\n", zero);
    
}

void median_mode(int* data, int numtoken, FILE *sensor)
{
    int median= numtoken/2, i;
    int number = data[0];
    int mode = number;
    int count = 1;
    int countMode = 0;
    
    for(i=0; i<numtoken; i++)
    {
        if (data[i] == number)
        {
            count++;
        }
        else
        {
            if (count > countMode)
            {
                countMode = count;
                mode = number;
            }
            count = 1;
            number = data[i];
        }
    }
    
    printf("The median is %i\n", data[median]);
    fprintf(sensor,"The median is %i\n", data[median]);
    
    printf("The mode is %i and it occurs %i times\n\n", mode, countMode);
    fprintf(sensor,"The mode is %i and it occurs %i times\n\n", mode, countMode);
    
}
