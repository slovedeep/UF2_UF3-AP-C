#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "library.h"
#include "functions.c"


void main(){
    struct registry reg;
    getData(&reg);
    printData(reg);
}