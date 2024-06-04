#include <stdio.h>

int main(int argc, char **argv){

    int a , b;
    a=18;
    b=10;
    int *point_a ,*point_b;
    point_a=&a;
    point_b=&b;
    
    printf("before swapping\n");
    printf("a = %d\n",a);
    printf("\nb = %d\n",b);

    int attemp=*point_a;
    a=*point_b;
    *point_b=attemp;

    printf("after swapping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    printf("#################\n");

    printf("Adresse of a : %d\n",point_a);
    printf("Adresse of b : %d\n",point_b);
    printf("Adresse of a in Hexadecimal : %p\n",point_a);
    printf("Adresse of b in Hexadecimal : %p\n",point_b);

    printf("\n####pointer to pointer#####\n");
    int var = 10;
    int *intptr = &var;
    int **ptrptr = &intptr;
    
    printf("var: %d \nAddress of var: %d \n\n",var, &var);
    printf("inttptr: %d \nAddress of inttptr: %d \n\n", intptr, &intptr);
    printf("var: %d \nValue at intptr: %d \n\n", var, *intptr);
    printf("ptrptr: %d \nAddress of ptrtptr: %d \n\n", ptrptr, &ptrptr);
    printf("intptr: %d \nValue at ptrptr: %d \n\n", intptr, *ptrptr);
    printf("var: %d \n*intptr: %d \n**ptrptr: %d", var, *intptr, **ptrptr);
   
    return 0;
}