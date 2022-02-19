#include <stdio.h>
#include <stdib.h>
#include <stdbool.h>

//temperatura con condiciones//
//frio: 16
//caliente: 29
int frio = 16;
int caliente = 29;
int sofa = 7000;



int main(int argc, char** argv){
    int imputTemp = atoi(argv[1]);
    int imputMoney = atoi(argv[2]);
    char* inputName = argv[3];   //--> "F" ---> {'F','a', 'm', 'a', 'l', 'e', '\0'}
    int tempCondition = ( inputTemp == frio );
    int tempCondition2 = (inputTemp == caliente);
    int tempCondition3 = (inputTemp => caliente);
    int canRobotMove = (inputTemp <= caliente);
    int hasUserMoney = ( inputMoney >= sofa );
    int isUserMale = (inputName)

    if(canRobotMove){
        //Robot.move(x_coord, y_coord);
    } else {
        //Robot.stpo(x_coord, y_coord);
    }

    if(hasUserMoney){
        //Allows ti bus
    } else {
        //Rejected  product

    }
    
    if(imputTemp <= 29)

    }

    return 0;

}