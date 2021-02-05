#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "library.h"
#include "functions.c"


void main(){
  
    char fp[50];
    int len;
    bool valid=true;
    
    do
    {
        if (valid==false){
            printf("El fichero tiene en el formato '.txt'.\n");
        }
        printf("Introduce el nombre del fichero o la ruta del fichero:\n");
        gets(fp);
        len=strlen(fp);
        if (fp[len-4]=='.' && fp[len-3]=='t' && fp[len-2]=='x' && fp[len-1]=='t' ){
            valid=true;
        }
        else{
            valid=false;
        }
    } while (valid==false);
    
    openFile(fp);
    
}