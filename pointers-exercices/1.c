#include <stdio.h>


int main(){

    /*
    Write a C program that declares an integer variable x, initializes it to a value (e.g., 10), 
    and then prints both the value of x and its memory address.
    */
    int x =10;
    printf("the value of is x %d\n",x);
    printf("Adress Memory of x is : %p\n",&x);


    /*
    Write a C program that declares two integer variables, a and b, initializes them to different
    values, and then uses pointers to swap their values. After swapping, 
    print the values of a and b to verify that the swap was successful.
    */
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
    //corrects
   /* printf("a = %d\n",*point_a);
    printf("b = %d\n",*point_b);    */


    return 0 ;
}
