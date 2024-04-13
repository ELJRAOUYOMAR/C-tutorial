#include <stdio.h>

struct exmp
{
    int id;
    double numbre;
};

void print_exmp(struct exmp e){
    printf("Id : %d , Number : %.2f\n",e.id,e.numbre);
}

int main(){

    // struct exmp ex1 = {10 , 19.977};
    // struct exmp ex2 = {20 , 27.9029};

    // print_exmp(ex1);
    // print_exmp(ex2);

    // using loop 
    struct exmp example[] = {{20 , 27.9029},{10 , 19.977},{899 , 16.917},{100 , 28.1}};
    int num_example = sizeof(example) / sizeof(example[0]);

    for(int i = 0; i < num_example ; i++){
        print_exmp(example[i]);
    }

    return 0;
}