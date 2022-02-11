#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
    printf("program executed: %s, number of inputs elements: %d", argv[0], argc);
    printf("Hola, %scesar %sorlando %scorrea %scastro, bienvenido!\n", argv[1], argv[2], argv[3], argv[4]);
    return 0;

}