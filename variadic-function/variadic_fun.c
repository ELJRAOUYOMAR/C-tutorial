#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>



void printNumbers(int count, ...){

    int i;
    va_list args;
    va_start(args, count);

    printf("using \n");
    vprintf("%d%d%d%d\n",args);

    printf("using for loop\n");
    for (i=0 ; i < count ; i++)
        // the second argument   is the type of the other arguments in the function 
        printf("%d\n",va_arg(args, int));
    
    

    va_end(args);
}


int main(){

    printNumbers(4, 8,2,3,4);

    return 0;
}
