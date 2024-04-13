//An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.
#include <stdio.h>
// #include <stdlib.h>

#define Name "Ahmed"
#define Age 27
#define HelloWorld() printf("Hello World!\n")
#define HelloWorld1() printf("Hello World1   ") , printf("Hello World2\n")
#define PrintNumber() int x = 100 ; printf("Number = %d\n",x)
#define Sum(x,n) int z = x+n; printf("The sum of %d and %d is %d",x,n,z)
#define pi 22.0/7.0
#define replaced_number 200
#define original_number replaced_number // x = y    we can make this line first or the line above
#define min(num1,num2) (num1 < num2 ? num1 : num2)
#define max(num1,num2) (num1 > num2 ? num1 : num2)

#define is_active 1 //0
#ifdef is_active

#endif // is_active
int main(int argc,char *argv[]){

    HelloWorld();
    HelloWorld1();
    PrintNumber();
    Sum(10,6);
    printf("He is %s his age is %d\n",Name,Age);
    printf("PI = %.2f\n",pi);
    #undef pi
    // this line don't work since undefine the pi, you can uncomment this line to test it
    //printf("PI = %.2f\n",pi);

    //we can also write replaces_number here ,don't write in above
    //int replaced_number = 99;
    printf("the value of original_number is %d,it is the value of replaced_number\n",original_number);
    printf("The min number of %d and %d is %d, and the max is %d\n",9,20,min(9,20),max(9,20));
    /*
     there are a number of predefined macros that provide information about the compiler, platform,
     and other compile-time details. These macros are often used for conditional compilation and for
     writing code that is portable across different systems. Here are some of the standard predefined
     macros in C:
    */
    printf("This code is in file: %s\n  ",__FILE__);
    printf("The current line number of this file are %d\n",__LINE__);
    printf("the date when the source code was compiled is %s , The format of the date is implementation-defined.\n",__DATE__);
    
    /*
    
    __STDC__: This macro is defined by the C standard and typically has a value of 1, indicating that the compiler is conforming to the C standard. If it's not defined or has a different value, it means the compiler may not fully conform to the standard.

    __cplusplus: This macro is defined when you are compiling C++ code and can be used to conditionally include or exclude certain code for C++ compilation.

    _MSC_VER: This macro is specific to Microsoft Visual C++ (MSVC) and provides the version number of the compiler.

    __GNUC__, __clang__, __ICC, etc.: These macros indicate the use of specific compilers (GCC, Clang, Intel C/C++ Compiler, etc.) and can be used to conditionally compile code for specific compilers.

    __SIZEOF_INT__, __SIZEOF_LONG__, __SIZEOF_POINTER__, etc.: These macros provide the size in bytes of various data types on the target platform.

    _WIN32, __linux__, __APPLE__, etc.: These macros can be used to detect the target operating system or platform.

    __cplusplus: This macro is defined when compiling C++ code and can be used for conditional compilation based on the language.
    
    */
    
    
    return 0;
}


