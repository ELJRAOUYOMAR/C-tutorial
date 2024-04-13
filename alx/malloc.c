#include <stdio.h>
#include <stdlib.h>


int main (){

    int i,*n=(int*)malloc(5 * sizeof(int));
    
    for (i=1 ; i<=5 ; i++){
        n[i] = i ;
        printf("%d\n",n[i]);
    }

    return 0;
}