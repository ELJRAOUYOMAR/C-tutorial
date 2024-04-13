#include <stdio.h>

void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);


int main(){

    void (*ptrarr[])(int,int) = {add,subtract,multiply};
    unsigned int ch, a = 20, b = 6;

    printf("Tap 1 for addition, 2 for subtraction and 3 for multiply");
    scanf("%d",&ch);

    if (ch > 2) return 0;

    (*ptrarr[ch])(a, b);

    return 0;
} 

void add(int a, int b){
    printf("a + b = %d",a + b );
}

void subtract(int a, int b){
    printf("a - b = %d",a -  b );
}

void multiply(int a, int b){
    printf("a * b = %d",a * b );
}
