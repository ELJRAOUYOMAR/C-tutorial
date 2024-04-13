//https://chat.openai.com/c/afb766eb-d1c5-4c40-b9fe-a0ec20a9fdad
#include <stdio.h>
#include <stdbool.h>

int main(){



// Certainly! Here's an updated version of the data types in C, along with examples using printf() and
//  scanf() functions for input and output:

// Integers:

// int: Represents signed integers.
// Example with printf():


int num = 10;
printf("The number is: %d\n", num);

// Example with scanf():

int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("You entered: %d\n", num);

// Floating-Point Numbers:

// float: Represents single-precision floating-point numbers.
// double: Represents double-precision floating-point numbers.
// Example with printf():


float pi = 3.14;
printf("The value of pi is: %.2f\n", pi);

// Example with scanf():

float price;
printf("Enter the price: ");
scanf("%f", &price);
printf("The price entered is: %.2f\n", price);

// Characters:

// char: Represents a single character.
// Example with printf():


char letter = 'A';
printf("The letter is: %c\n", letter);
// Example with scanf():


char name[20];
printf("Enter your name: ");
scanf("%s", name);
printf("Hello, %s!\n", name);
// Booleans:

// _Bool (or bool with the help of stdbool.h header): Represents a boolean value (0 for false, any non-zero value for true).
// Example with printf():


_Bool isTrue = 1;
printf("The value is: %d\n", isTrue);
// Example with scanf():

//including the library 
bool isEnabled;
printf("Enter 1 for enabled, 0 for disabled: ");
scanf("%d", &isEnabled);
printf("Status: %s\n", isEnabled ? "Enabled" : "Disabled");
// Void:

// void: Represents the absence of a type.
// Example with printf():


printf("This function does not return anything.\n");
// Arrays:

// type[]: Represents a collection of elements of the specified type.
// Example with printf():


int numbers[] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
}
printf("\n");
// Example with scanf():


int numbers[5];
printf("Enter five numbers: ");
for (int i = 0; i < 5; i++) {
    scanf("%d", &numbers[i]);
}
printf("You entered: ");
for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
}
printf("\n");
// Pointers:

// type*: Represents a memory address pointing to a value of the specified type.
// Example with printf():


int num = 10;
int* pointer = &num;
printf("The value at the memory address is: %d\n", *pointer);
// Example with scanf():


int num;
printf("Enter a number: ");
scanf("%d", &num);
int* pointer = &num;
printf("The number entered is: %d\n", *pointer);
// Using printf() and scanf() functions allows you to display and read data of different types in C. Remember to include the appropriate format specifiers (%d, %f, %c, %s) to match the data type when using these functions.


  return 0 ;
}
