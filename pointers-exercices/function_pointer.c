#include <stdio.h>


void func(int a);


int main(){
    // ptr_func is a pointer to function func()
    void (*ptr_func)(int) = &func;

    /* The above line is equivalent of following two 
       void (*ptr_func)(int); 
       ptr_func = &func;  
    */

    // invoking func() using ptr_func
    (*ptr_func)(10);

    // we can also write like this 
    void (*fun_ptr)(int) = func;  // & removed 
    fun_ptr(10);  // * removed 


    return 0 ;
}

void func(int a){
    printf("The Value of a is %d",a);
}