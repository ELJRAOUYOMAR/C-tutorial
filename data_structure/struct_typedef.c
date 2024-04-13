#include <stdio.h>

// typedef is a keyword used to create an alias or a new name for an existing data type.
typedef int integer;
typedef char string;

// first method
typedef struct emp employee;
struct emp{
    int id;
    char* name;
};

// second method
typedef struct emp{
    int id;
    char* name;
} employee;

void print_emp(struct emp e){
    printf("Id : %d  ,  Name : %s\n",e.id,e.name);
}

int main(){

    // struct emp e1
    employee e1 = {1 , "Ahmed"};
    print_emp(e1);


    return 0;
}