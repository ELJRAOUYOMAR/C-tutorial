#include <stdio.h>


int main(int argc, char **argv){

    int array[3] = {1,2,3};
    int *p = array+1;
    // int (*p)[3] = &array;
    printf("%d\n",*p);

    printf("size of duoble if: %zu\n",sizeof(p));
    return 0;
}
