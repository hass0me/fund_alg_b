#include <stdio.h>
#include "../libraries/utils.h"
#include <stdlib.h>


int main(int argc, char**argv){

    for (int iterator = 1 ; iterator <=10 ; iterator = iterator + 1){
        printf("ITERATOR: %d\n", iterator);
        sleep(1000); 
    } 

    int rango = 1;
    int count = 0;
    while ( rango <= 99 ){
        count = count + rango;
        rango++ ; //rango = rango +1;
    }
    printf("suma: %d\n", count);

    //loopInfinitos
    while (true){
        printf("program running...\n");
        sleep(1000);
        system("clear");    
    };

    for (;;){
        break;

    }
    return 0;
}


