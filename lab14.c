/*
 Carlos Reyes / lab 14
 CIS231 / Cuesta College
 November 16, 2014
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void strInput(char str[],int maxChars);

int main(int argc, const char * argv[]) {
    int maxChars = 81, count,i, sum=0, k, hi, low;
    char str[maxChars];
    char * arr[maxChars];
    int *p;
    double ave;

    strInput(str, maxChars);
    while(strlen(str))
    {
        
        if((arr[0]= strtok(str, " \t")))
           count++;
        while((arr[count] = strtok(NULL, " \t")))
            count++;
    
        p =(int *) malloc(count*sizeof(int));
    
        for(i=0; i<count; i++)
        {
            p=atoi(arr);
            printf("dyarr[%i] is %d\n\n", i, p[i]);
            sum = sum+p[i];
        }
    
        ave=  (sum / (double )count);
    
        printf("There were %i numbers input\n\n", count);
    
        printf("The numbers input were : ");
        
        for(k=0; k<count; k++)
        {
            printf("%i ", p[k]);
        }
    
        printf("\n\nThe sum of all the numbers are: %i\n\n", sum);
    
        printf("The average of all the numbers is: %.1lf\n\n", ave);
        
        //Not sure why but the loop was looking at the spot of the array and not the value in it
    
        for(k=0; k<count; k++)
        {
            low= p[0];
            hi= p[0];
            
            if(p[k]<low)
                low= p[k];
            
            if(p[k]>hi)
                hi= p[k];
        }
    
        printf("The lowest number in the string is: %i\n\n", low);
        printf("The highest number in the string is: %i\n\n", hi);
        
        printf("Please enter new values for string or enter new line to quit: ");
        strInput(str, maxChars);
        
    }
    
    return 0;
}

void strInput(char str[],int maxChars)
{
    int i=0, length;
    printf("Enter string or enter a new line to quit here: ");
    
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
        str[length]= '\0';
    }
}