#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(int argc, char** argv){ 
    printf("argv[1]: %s argv[2]: %s\n", argv[1], argv[2]);
    int rango1 = atoi (argv[1]);
    int rango2 = atoi (argv[2]);

    for (int i = 1; i<=rango1; i++){
        int number = i;
        bool isDividedByTwo = ( number % 2 == 0);

        if (isDividedByTwo) 
        printf ("even number: %d\n", number);
        else
        printf ("odd number: %d\n", number);
    }
    
    return 0;
}