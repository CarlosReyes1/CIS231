/*
 
 Lab 13 / Carlos Reyes
 CIS 231 / Cuesta College
 Nov. 10, 2014
 
*/
 

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char  str[81];
    int i=0, k, sum_a=0, sum_b=0, sum_c=0, sum_d=0, sum_e=0, sum_f=0;
    int alph=0, lower=0, upper=0, num=0, alnum=0, oth=0, count, length=0;
    
    
    for(k=1; k<6; k++)
    {

        printf("Loop %i \n", k);
        while((str[i]=getchar()) != '\n')
            i++;
        if(i>80)
        {
            length=80;
            str[length++]= '\0';
            
        }
        else
        {
            length=i;
            str[length]= '\0';
        }

            printf("\n\nString: %s \n", str);
        
        
        for (count = 0;  count < length; count++)
            {
                if (isalpha(str[count]))
                alph++;
                
                if (isdigit(str[count]))
                num++;
                
                if (isalnum(str[count]))
                alnum++;
                
                if (islower(str[count]))
                lower++;
            
                if (isupper(str[count]))
                upper++;
            
                if (isspace(str[count]))
                oth++;
            
                if (ispunct(str[count]))
                oth++;
            }
        
        printf("\nThe length of the string is %i\n\n", length);
        printf("There are %i alphabetic characters\n\n", alph);
        printf("There are %i lower case characters\n\n", lower);
        printf("There are %i upper case characters\n\n", upper);
        printf("There are %i numeric characters\n\n", num);
        printf("There are %i alphanumeric characters\n\n", alnum);
        printf("There are %i other characters\n\n", oth);
        
        sum_a=alph+sum_a;
        sum_b=lower+sum_b;
        sum_c=upper+sum_c;
        sum_d=num+sum_d;
        sum_e=alnum+sum_e;
        sum_f=oth+sum_f;
        
        alph=0;
        lower=0;
        upper=0;
        num=0;
        alnum=0;
        oth=0;
        length=0;

    }
    printf("The total of all alphabetic characters is %i\n\n", sum_a);
    printf("The total of all lower case characters is %i\n\n", sum_b);
    printf("The total of all upper case characters is %i\n\n", sum_c);
    printf("The total of all numeric characters is %i\n\n", sum_d);
    printf("The total of all alphanumeric characters is %i\n\n", sum_e);
    printf("The total of all other characters is %i\n\n", sum_f);

    
    return 0;
}
