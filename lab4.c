//
//
//  Lab 4 - Debugging test
//  CIS 231 / Cuesta College
//  Carlos Reyes
//
//

#include <stdio.h>

#define SOME_CONSTANT 15.0

int main(int argc, const char * argv[])
{

    int amount = 25;
    int somethingElse = 2;
    double firstDubStep = 0.5, secondDub = 16.0;
    
    printf("Is SOME_CONSTANT 15? It's %lf\n\n", SOME_CONSTANT);
    
    printf("I'm pretty sure amount is...25? It's %i\n\n", amount);
    
    printf("The dubs' product should be 8.0, is it? Product: %lf\n\n", firstDubStep/secondDub);
    
    printf("Amount divided by something else needs to be 12, right now its %i\n", amount/somethingElse);
    return 0;
}

